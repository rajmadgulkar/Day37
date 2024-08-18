//Stack implementation using Linked List
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
int size=0;
int flag=0;

struct node* createNode(){
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&newNode->data);
    newNode->next=NULL;
    return newNode;
}
void addNode(){
    struct node *newNode=createNode();
    if(head==NULL){
        head=newNode;
    }else{
        struct node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
}
int countNode(){
    struct node *temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
bool IsFull(){
    if(countNode()==size){
        return true;
    }else{
        return false;
    }
}
int push(int stack[]){
    int cnt=countNode();
    if(IsFull()){
        return -1;
    }else{
    
        addNode();
        return 0;
    }
}
bool IsEmpty(){
    if(head==NULL){
        return true;
    }else{
        return false;
    }
}
int pop(int stack[]){
    if(IsEmpty()){
        flag=0;
        return -1;
    }else if(head->next==NULL){
        flag=1;
        int val=head->data;
        head=NULL;
        return val;
        }else{
        
        flag=1;
        struct node *temp1=head;
        struct node *temp2=NULL;

        while(temp1->next!=NULL){
            temp2=temp1;
            temp1=temp1->next;
        }

        int val=temp1->data;
        free(temp1->next);
        temp2->next=NULL;
        return val;
    }
}
int peek(int stack[]){
    if(IsEmpty()){
        flag=0;
        return -1;
    }else if(head->next==NULL){
        flag=1;
        int val=head->next;
        return val;
    }else{
        flag=1;
        struct node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        int val=temp->data;
        return val;
    }
}


void main(){
    printf("Enter size of stack:");
    scanf("%d",&size);
    int stack[size];

    char choice;
    do{
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.peek\n");

        int ch;
        printf("Enter a choice for operation:");
        scanf("%d",&ch);

        switch(ch){
            case 1:
            {
                int ret=push(stack);
                if(ret==-1){
                    printf("Stack overflow\n");
                }
            }
            break;
            case 2:
            {
            int ret=pop(stack);
            if(flag==0){
                printf("Stack is Empty");
            }else{
                printf("%d element popped",ret);
            }
            }
            break;
            case 3:
            {
                int ret=peek(stack);
                if(flag==0){
                    printf("Stack is empty\n");
                }else{
                    printf("%d top position\n",ret);
                }
            }
            break;
            default:
            printf("Wrong operation choice\n");
            break;
        }
        getchar();
        printf("Do you want to continue:");
        scanf("%c",&choice);
    }while(choice=='Y'||choice=='y');

}
/*
Enter size of stack:3
1.push
2.pop
3.peek
Enter a choice for operation:1
Enter data:10
Do you want to continue:y
1.push
2.pop
3.peek
Enter a choice for operation:20
Wrong operation choice
Do you want to continue:y
1.push
2.pop
3.peek
Enter a choice for operation:1
Enter data:20
Do you want to continue:y
1.push
2.pop
3.peek
Enter a choice for operation:1
Enter data:30
Do you want to continue:y
1.push
2.pop
3.peek
Enter a choice for operation:1
Stack overflow
Do you want to continue:y
1.push
2.pop
3.peek
Enter a choice for operation:2
30 element poppedDo you want to continue:y
1.push
2.pop
3.peek
Enter a choice for operation:2
20 element poppedDo you want to continue:y
1.push
2.pop
3.peek
Enter a choice for operation:2
10 element poppedDo you want to continue:y
1.push
2.pop
3.peek
Enter a choice for operation:2
Stack is EmptyDo you want to continue:y
1.push
2.pop
3.peek
Enter a choice for operation:3
Stack is empty
Do you want to continue:y
1.push
2.pop
3.peek
Enter a choice for operation:1
Enter data:10
Do you want to continue:y
1.push
2.pop
3.peek
Enter a choice for operation:3
10 top position
Do you want to continue:y
1.push
2.pop
3.peek
Enter a choice for operation:1
Enter data:20
Do you want to continue:y
1.push
2.pop
3.peek
Enter a choice for operation:3
20 top position
Do you want to continue:y
1.push
2.pop
3.peek
Enter a choice for operation:1
Enter data:30
Do you want to continue:y
1.push
2.pop
3.peek
Enter a choice for operation:3
30 top position
Do you want to continue:y
1.push
2.pop
3.peek
Enter a choice for operation:3
30 top position
Do you want to continue:y
1.push
2.pop
3.peek
Enter a choice for operation:2
30 element poppedDo you want to continue:y
1.push
2.pop
3.peek
Enter a choice for operation:3
20 top position
Do you want to continue:n
*/