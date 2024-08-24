//Write a function that counts the number of times a given int occurs in a Linked List

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}node;


node* createNode(){
    node *newNode=(node*)malloc(sizeof(node));
    printf("Enter data:");
    scanf("%d",&newNode->data);
    newNode->next=NULL;
    return newNode;
}

int addNode(node** head){
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
        return 0;
    }
}
int printLL(node* head){
    node *temp=head;
    while(temp!=NULL){
        printf("|%d|",temp->data);
        temp=temp->next;
    }
    return 0;
}
int countInt(node*head,int searchEle){
    int count=0;
    node *temp=head;
    while(temp!=NULL){
        if(temp->data==searchEle){
            count++;   
        }
        temp=temp->next;
    }
    return count;
}


int main(){
    node *head=NULL;
    int noofNodes;
    printf("Enter no of Nodes:");
    scanf("%d",&noofNodes);

    for(int i=1;i<=noofNodes;i++){
        addNode(&head);
    }
    printLL(head);

    int countofSearchEle=countInt(head,10);
    printf("The searched element is repeated %d times in a LL",countofSearchEle);

    return 0;

}
/*
Enter no of Nodes:6 
Enter data:10
Enter data:20
Enter data:10 
Enter data:30
Enter data:50
Enter data:10
|10||20||10||30||50||10|The searched element is repeated 3 times in a LL
*/