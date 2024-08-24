#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}node;

node *head=NULL;

node* createNode(){
    node *newNode=(node*)malloc(sizeof(node));
    printf("Enter data:");
    scanf("%d",&newNode->data);
    newNode->next=NULL;
    return newNode;
}

int addNode(){
    node *newNode=createNode();
    if(head==NULL){
        head=newNode;
        return 0;
    }else{
        node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        return 0;
    }
}
int printLL(){
    node *temp=head;
    while(temp!=NULL){
        printf("|%d|",temp->data);
        temp=temp->next;
    }
    return 0;
}
int countNode(){
    int count=0;
    node *temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;

}
int midd_ele(node* head){
    int cnt=countNode();
    int size=cnt/2;
    node *temp=head;

    while(size--){
        temp=temp->next;
    }

    return temp->data;

}

int main(){
    int noofNodes;
    printf("Enter no of Nodes:");
    scanf("%d",&noofNodes);

    for(int i=1;i<=noofNodes;i++){
        addNode();
    }

    int ret=midd_ele(head);
    printf("The middle element of a LL is %d",ret);

    return 0;

}
/*
Enter no of Nodes:3
Enter data:10
Enter data:20
Enter data:30
The middle element of a LL is 20*/
