#include<stdio.h>
#include<stdbool.h>

int top=-1;
int size=0;
bool IsFull(){
    if(top==size-1){
        return true;
    }else{
        return false;
    }
}

int push(int stack[]){
    if(IsFull()){
        return -1;
    }else{
        top++;
        printf("Enter data:");
        scanf("%d",&stack[top]);
        return 0;
    }
}





void main(){
    printf("Enter Array Size:");
    scanf("%d",&size);
    int stack[size];
    char choice;
    do{
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.pick\n");
        printf("4.IsEmpty\n");
        printf("5.IsFull\n");

        int ch;
        printf("Enter choice for an operation:");
        scanf("%d",&ch);

        switch(ch){
            case 1:
            {
                int ret;
                ret=push(stack);
                if(ret==-1){
                    printf("Stack Overflow\n");
                }
            }
            break;

            /*case 2:
            break;

            case 3:
            break;

            case 4:
            break;
            case 5:
            break;*/


            default:
            printf("Wrong choice for an operation\n");
            break;
        }
        getchar();
        printf("Do you want to continue:");
        scanf("%c",&choice);
    }while(choice=='Y'||choice=='y');
}

/*
Enter Array Size:3
1.push
2.pop
3.pick
4.IsEmpty
5.IsFull
Enter choice for an operation:1
Enter data:10
Do you want to continue:y
1.push
2.pop
3.pick
4.IsEmpty
5.IsFull
Enter choice for an operation:1
Enter data:20
Do you want to continue:y
1.push
2.pop
3.pick
4.IsEmpty
5.IsFull
Enter choice for an operation:1
Enter data:30
Do you want to continue:y
1.push
2.pop
3.pick
4.IsEmpty
5.IsFull
Enter choice for an operation:1
Stack Overflow
Do you want to continue:n
*/