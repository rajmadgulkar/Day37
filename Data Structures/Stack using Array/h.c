#include<stdio.h>
int size=0;
int top1=0;
int top2=0;

int flag1=0;
int flag2=0;


int push1(int arr[]){
    if(top1==top2-1){
        return -1;
    }else{
        top1++;
        printf("Enter data:");
        scanf("%d",&arr[top1]);
        return 0;
    }
}
int push2(int arr[]){
    if(top2==top1+1){
        return -1;
    }else{
        top2--;
        printf("Enter data:");
        scanf("%d",&arr[top2]);
        return 0;
    }
}
int pop1(int arr[]){
    if(top1==-1){
        flag1=0;
        return -1;
    }else{
        flag1=1;
        int val=arr[top1];
        top1--;
        return val;
    }
}
int pop2(int arr[]){
    if(top2==size){
        flag2=0;
        return -1;
    }else{
        flag2=1;
        int val=arr[top2];
        top2++;
        return val;
    }
}
 
void main(){
    printf("Enter size of an array:");
    scanf("%d",&size);
    int arr[size];

    top1=-1;
    top2=size;

    char choice;

    do{

        printf("Push1\n");
        printf("Push2\n");
        printf("pop1\n");
        printf("pop2\n");

        int ch;
        printf("Enter operation:");
        scanf("%d",&ch);

        switch(ch){
            case 1:
            {
                int ret=push1(arr);
                if(ret==-1){
                    printf("top1&top2 colliding\n");
                }
                
            }
            break;

            case 2:
            {
                int ret=push2(arr);
                if(ret==-1){
                    printf("top1&top2 colliding\n");
                }
                
            }
            break;

            case 3:
            {
                int ret=pop1(arr);
                if(flag1==0){
                    printf("Stack empty from left end\n");
                }else{
                    printf("%d popped from left end",ret);
                }
                
            }
            break;

            case 4:
            {
                int ret=pop2(arr);
                if(flag2==0){
                    printf("Stack empty from right end\n");
                }else{
                    printf("%d popped from right end",ret);
                }
            }
            break;

            default:
            printf("Wrong choice\n");
            break;
        }
    getchar();
    printf("Do you want to continue?");
    scanf("%c",&choice);
    }while(choice=='Y'||choice=='y');



}
/*
Enter size of an array:5
Push1
Push2
pop1
pop2
Enter operation:1
Enter data:10
Do you want to continue?y
Push1
Push2
pop1
pop2
Enter operation:2
Enter data:20
Do you want to continue?y
Push1
Push2
pop1
pop2
Enter operation:1
Enter data:30
Do you want to continue?y
Push1
Push2
pop1
pop2
Enter operation:2
Enter data:40
Do you want to continue?y
Push1
Push2
pop1
pop2
Enter operation:1
Enter data:50
Do you want to continue?y
Push1
Push2
pop1
pop2
Enter operation:2
top1&top2 colliding
Do you want to continue?y
Push1
Push2
pop1
pop2
Enter operation:3
50 popped from left endDo you want to continue?y
Push1
Push2
pop1
pop2
Enter operation:4
40 popped from right endDo you want to continue?y
Push1
Push2
pop1
pop2
Enter operation:3
30 popped from left endDo you want to continue?y
Push1
Push2
pop1
pop2
Enter operation:4
20 popped from right endDo you want to continue?y
Push1
Push2
pop1
pop2
Enter operation:3
10 popped from left endDo you want to continue?y
Push1
Push2
pop1
pop2
Enter operation:3
Stack empty from left end
Do you want to continue?y
Push1
Push2
pop1
pop2
Enter operation:4
Stack empty from right end
Do you want to continue?n
*/