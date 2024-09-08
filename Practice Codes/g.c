#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;
int freq=0;
node* createNode(){
    node *newNode=(node*)malloc(sizeof(node));
    printf("Enter a data:");
    scanf("%d",&newNode->data);
    newNode->next=NULL;
    return newNode;
}

int addNode(node **head){
    node *newNode=createNode();
    if(*head==NULL){
        *head=newNode;
        return 0;
    }else{
        node *temp=*head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
}
int countEle(node *head,int searchEle){
    if(head==NULL){
        return freq;
    }else{
    node *temp=head;
    while(temp!=NULL){
        if(temp->data==searchEle){
            freq++;
        }
        temp=temp->next;
        return freq;
    }
   }  
}

int main(){
    int noofNodes;
    printf("Enter no of Nodes:");
    scanf("%d",&noofNodes);

    node *head=NULL;

    for(int i=1;i<=noofNodes;i++){
        addNode(&head);
    }
    printf("The element appears %d times in a LL",countEle(head,10));

    return 0;

}