#include<stdio.h>
int size=0;
int front =-1;
int rear=-1;
int flag=0;

int enqueue(int arr[]){
    if(rear==size-1){
        return -1;
    }else{
        if(front==-1){
            front++;
        }
        rear++;
        printf("Enter data:\n");
        scanf("%d",&arr[rear]);

        return 0;
    }
}
int printQueue(int arr[]){
    if(front==-1){
        return -1;
    }else{
        for(int i=front;i<=rear;i++){
            printf("|%d|",arr[i]);
        }
        printf("\n");
        return 0;
    }

}
int dequeue(int arr[]){
    if(rear==-1){
        flag=0;

        return -1;
    }else{
        flag=1;
        int val=arr[front];
        if(front==rear){
            front=-1;
            rear=-1;
        }else{
            front++;
        }
        return val;
    }
}
int fronTT(int arr[]){
    if(front==-1){
        flag=0;
        return -1;
    }else{
        flag=1;
        return arr[front];
    }
}
void main(){
    printf("Enter size of an array?");
    scanf("%d",&size);

    int arr[size];
    
    char choice;
    do{
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Front\n");
        printf("4.PrintQ\n");

        int ch;
        printf("Enter your choice of operation");
        scanf("%d",&ch);

        switch(ch){
            case 1:
            {
                int ret=enqueue(arr);
                if(ret==-1){
                    printf("Queue Overflow\n");
                }
            }
            break;
            case 2:
            {
                int ret=dequeue(arr);
                if(flag==1){
                    printf("%d Dequeued\n");
                }else{
                    printf("Underflow\n");
                }
            }
            break;
            case 3:
            {
                int ret=fronTT(arr);
                if(flag==1){
                    printf("fromt=%d ",ret);
                }else{
                    printf("Queue is empty\n");
                }
            }
            break;
            case 4:
            {
                int ret=printQueue(arr);
                if(ret==-1){
                    printf("Queue is empty\n");
                }

            }

            break;

            default:
            printf("Wrong choice\n");
            break;

        }
        getchar();
        printf("Do you want to comtinue?");
        scanf("%c",&choice);
    }while(choice=='Y'||choice=='y');
}
/*
Enter size of an array?3
1.Enqueue
2.Dequeue
3.Front
4.PrintQ
Enter your choice of operation1
Enter data:
10
Do you want to comtinue?y
1.Enqueue
2.Dequeue
3.Front
4.PrintQ
Enter your choice of operation20
Wrong choice
Do you want to comtinue?y
1.Enqueue
2.Dequeue
3.Front
4.PrintQ
Enter your choice of operation1
Enter data:
20
Do you want to comtinue?y
1.Enqueue
2.Dequeue
3.Front
4.PrintQ
Enter your choice of operation3
fromt=10 Do you want to comtinue?y
1.Enqueue
2.Dequeue
3.Front
4.PrintQ
Enter your choice of operation4
|10||20|
Do you want to comtinue?y
1.Enqueue
2.Dequeue
3.Front
4.PrintQ
Enter your choice of operation2
0 Dequeued
Do you want to comtinue?y
1.Enqueue
2.Dequeue
3.Front
4.PrintQ
Enter your choice of operation3
fromt=20 Do you want to comtinue?y
1.Enqueue
2.Dequeue
3.Front
4.PrintQ
Enter your choice of operation4
|20|
Do you want to comtinue?y
1.Enqueue
2.Dequeue
3.Front
4.PrintQ
Enter your choice of operation1
Enter data:
30
Do you want to comtinue?y
1.Enqueue
2.Dequeue
3.Front
4.PrintQ
Enter your choice of operation1
Queue Overflow
Do you want to comtinue?y
1.Enqueue
2.Dequeue
3.Front
4.PrintQ
Enter your choice of operation3
fromt=20 Do you want to comtinue?y
1.Enqueue
2.Dequeue
3.Front
4.PrintQ
Enter your choice of operation2
1 Dequeued
Do you want to comtinue?y
1.Enqueue
2.Dequeue
3.Front
4.PrintQ
Enter your choice of operation3
fromt=30 Do you want to comtinue?y
1.Enqueue
2.Dequeue
3.Front
4.PrintQ
Enter your choice of operation4
|30|
Do you want to comtinue?y
1.Enqueue
2.Dequeue
3.Front
4.PrintQ
Enter your choice of operation4
|30|
Do you want to comtinue?n
*/