//Floyd Cycle Algorithm

#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
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
}\
int getMiddle(node* head){
    node *fastptr=head;
    node *slwptr=head;

    while(fastptr!=NULL && fastptr->next!=NULL){
        fastptr=fastptr->next->next;
        slwptr=slwptr->next;
    }

    return slwptr->data;

}
void main(){
    int noofNodes;
    printf("Enter no of Nodes:");
    scanf("%d",&noofNodes);

    for(int i=1;i<=noofNodes;i++){
        addNode();
    }

    printLL();

    int ret=getMiddle(head);
    printf("%d is the middle element",ret);

}
/*
Enter no of Nodes:7
Enter data:10
Enter data:20
Enter data:30
Enter data:40
Enter data:50
Enter data:60
Enter data:70
|10||20||30||40||50||60||70|40 is the middle element
*/