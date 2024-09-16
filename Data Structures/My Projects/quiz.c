#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<termios.h>
#include<unistd.h>
#include<time.h>
#include<signal.h>


#define MAX_QUES_LEN 300
#define MAX_OPTION_LEN 100

#define COLOR_RED     "\x1b[31m"
#define COLOR_GREEN   "\x1b[32m"
#define COLOR_YELLOW  "\x1b[33m"
#define COLOR_BLUE    "\x1b[34m"
#define COLOR_MAGENTA "\x1b[35m"
#define COLOR_CYAN    "\x1b[36m"
#define COLOR_RESET   "\x1b[0m"

volatile int timeout_happened=0;//threading happens so to avoid caching we use volatile here.

typedef struct 
{
    char text[MAX_QUES_LEN];
    char options[4][MAX_OPTION_LEN];
    char correct_option;
    int timeout;
    int prize_money;
}Question;

int read_questions(char* file_name, Question** questions);
void print_formatted_question(Question question);
void play_game(Question* questions,int no_of_questions);
void reset_terminal_attributes();
void set_terminal_attributes();
int use_lifeline(Question* question,int* lifeline);

struct termios old_props;


int main(){
    srand(time(NULL));
    set_terminal_attributes();
    printf(COLOR_MAGENTA"\t\tTest your GK with Raj Madgulkar!!"COLOR_RESET);

    Question* questions;
    int no_of_questions=read_questions("questions.txt",&questions);
    play_game(questions,no_of_questions);
    exit(0);   
}
void timeout_handler(){
    timeout_happened=1;
    printf("%s\nTime Out!!!! Press any key...%s",COLOR_RED,COLOR_RESET);
    fflush(stdout);

}

void play_game(Question* questions,int no_of_questions){
    int money_won=0;
    int lifeline[]={1,1};

    signal(SIGALRM, timeout_handler);

    for(int i=0;i<no_of_questions;i++){
    print_formatted_question(questions[i]);
    alarm(questions[i].timeout);
    char ch=getchar();
    alarm(0);
    printf("%c",ch);
    ch=toupper(ch);

        if(timeout_happened==1){
            break;
        }


        if(ch=='L'){
            int value=use_lifeline(&questions[i],lifeline);
            if(value!=2){
                i--;    
            }
            continue;
        }

        if(ch==questions[i].correct_option){
         printf("%s\nCorrect!%s",COLOR_GREEN,COLOR_RESET);
         money_won=questions[i].prize_money;
         printf("%s\nCongratulations!! you have won:Rs%d.%s",COLOR_CYAN,money_won,COLOR_RESET);
         }
         else{
         printf("%s\nWrong! Correct answer is %c.%s",COLOR_RED,questions[i].correct_option,COLOR_RESET);
         break;
        }
    }
    printf("%s\n\nGame Over! Your Total winnings are:Rs%d.%s\n",COLOR_BLUE,money_won,COLOR_RESET);

}
int use_lifeline(Question* question,int* lifeline){
    printf("\n\n%sAvailable Lifeline:%s",COLOR_MAGENTA,COLOR_RESET);
    if(lifeline[0]){
        printf("\n%s 1.Fifty-Fifty(50/50)%s",COLOR_MAGENTA,COLOR_RESET);
    }
    if(lifeline[1]){
        printf("\n%s 2.Skip the question%s",COLOR_MAGENTA,COLOR_RESET);
    }

    printf("\n%sChoose a lifeline or 0 to return: %s",COLOR_MAGENTA,COLOR_RESET);

    char ch=getchar();
    printf("%c",ch);

        
    switch(ch)
    {
     case '1':
    if(lifeline[0]){
        lifeline[0]=0;
        int removed=0;
        while(removed<2){
            int num=rand()%4;
            if((num+'A')!=question->correct_option && question->options[num][0]!="\0" ){
                question->options[num][0]="\0";
                removed++;
            }
        }
    return 0;
    }
    break;
    case '2':
    if(lifeline[1]){
        lifeline[1]=0;
        return 2;
    }
    break;
    default:
    printf("\n%sReturning to the Question.%s",COLOR_MAGENTA,COLOR_RESET);       
    break;
    }
    return 0;
}


void print_formatted_question(Question question){

    printf("\n%s%s%s",COLOR_YELLOW,question.text,COLOR_RESET);
    for(int i=0;i<4;i++){
        if(question.options[i][0]!='\0'){
            printf("%s%c. %s%s",COLOR_BLUE,('A'+i),question.options[i],COLOR_RESET); 
        }
    }
    printf("\n\n%sHurry Up!! You have only %d seconds to answer...%s",COLOR_RED,question.timeout,COLOR_RESET);

    printf("\n%sEnter your answe(A,B,C,D) or L for Lifeline:%s",COLOR_GREEN,COLOR_RESET);





    //printf("\n%s\n%s\n%s\n%s\n%s",question.text,question.options[0],question.options[1],question.options[2],question.options[3]);
    //printf("\n%c\n%d\n%d\n",question.correct_option,question.timeout,question.prize_money);

}
int read_questions(char* file_name,Question** questions){

    FILE *file=fopen(file_name,"r");
    if(file==NULL){
        printf("\nUnable to open the questions bank.");
        exit(0);
    }

    char str[MAX_QUES_LEN];
    int no_of_lines=0;
    while(fgets(str,MAX_QUES_LEN,file)){
        no_of_lines++;
    }
    int no_of_questions=no_of_lines/8;
    *questions=(Question*)malloc(no_of_questions * sizeof(Question));

    rewind(file);

    for(int i=0;i<no_of_questions;i++){

        fgets((*questions)[i].text, MAX_QUES_LEN, file);
        for(int j=0;j<4;j++){
            fgets((*questions)[i].options[j],MAX_OPTION_LEN, file);
        }
        char option[10];
        fgets(option,10,file);
        (*questions)[i].correct_option=option[0];

        char timeout[10];
        fgets(timeout,10,file);
        (*questions)[i].timeout=atoi(timeout);

        char prize_money[10];
        fgets(prize_money,10,file);
        (*questions)[i].prize_money=atoi(prize_money);
    }
    fclose(file);
    return no_of_questions;

    
}

void set_terminal_attributes(){
    //Change terminal Properties
    tcgetattr(STDIN_FILENO,&old_props);
    atexit(reset_terminal_attributes);
    struct termios new_props=old_props;
    new_props.c_lflag &= ~(ECHO | ICANON);
    tcsetattr(STDIN_FILENO,TCSANOW,&new_props);
}

void reset_terminal_attributes(){
    tcsetattr(STDIN_FILENO,TCSANOW,&old_props);
}