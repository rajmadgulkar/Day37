#include<stdio.h>
#include<stdbool.h>

int top=-1;
int size=0;
int flag=0;
bool IsFull(){
    if(top==size-1){
        return true;
    }else{
        return false;
    }
}
bool IsEmpty(){
    if(top==-1){
        return true;
    }else{
        return false;
    }
}
int pop(int stack[]){
    if(top==-1){
        flag=0;
        return -1;
    }else{
        flag=1;
        int val=stack[top];
        top--;
        return val;
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
int peek(int stack[]){
    if(IsEmpty()){
        flag=0;
        return -1;
    }else{
        flag=1;
        int val=stack[top];
        return val; 
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

            case 2:
            {
                int ret=pop(stack);
                if(flag==0){
                    printf("Stack underflow\n");
                }else{
                    printf("%d popped",ret);
                }
            }
            break;
            case 3:
            {
                int ret=peek(stack);
                if(flag==0){
                    printf("Stack is empty\n");
                }else{
                    printf("%d top's current position",ret);
                }
            }
            break;

            case 4:
            break;
            case 5:
            break;

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
Enter choice for an operation:3
20 top's current positionDo you want to continue:y
1.push
2.pop
3.pick
4.IsEmpty
5.IsFull
Enter choice for an operation:2
20 poppedDo you want to continue:y
1.push
2.pop
3.pick
4.IsEmpty
5.IsFull
Enter choice for an operation:3
10 top's current positionDo you want to continue:y
1.push
2.pop
3.pick
4.IsEmpty
5.IsFull
Enter choice for an operation:2
10 poppedDo you want to continue:y
1.push
2.pop
3.pick
4.IsEmpty
5.IsFull
Enter choice for an operation:3
Stack is empty
Do you want to continue:n
*/