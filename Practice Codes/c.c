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

void addNode(){
    node *newNode=createNode();
    if(head==NULL){
        head=newNode;
        newNode->next=NULL;
    }else{
        node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=NULL;
    }
}
void printnode(){
    node *temp=head;
    while(temp!=NULL){
        printf("|%d|",temp->data);
        temp=temp->next;
    }
}
int getmiddle(node* head){
    int nodeArr[100];
    int size=0;

    node *temp=head;

    while(temp!=NULL){
        nodeArr[size++]=temp->data;
        temp=temp->next;
    }

    int middleInd=size/2;

    int middval=nodeArr[middleInd];
    return middval;

}




void main(){

    int noofNodes;
    printf("Enter no of Nodes:");
    scanf("%d",&noofNodes);

    for(int i=1;i<=noofNodes;i++){
        addNode();
    }
    printnode();

    printf("\n");

    printf("The middle element of a Linked list is:%d\n",getmiddle(head));
}
/*
Enter no of Nodes:5
Enter data:10
Enter data:20
Enter data:30
Enter data:40
Enter data:50
|10||20||30||40||50|
The middle element of a Linked list is:30
*/