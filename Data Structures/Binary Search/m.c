//identical LL
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
void addNode(node** head){
    node *newNode=createNode();
    if(*head==NULL){
        *head=newNode;
    }else{
        node *temp=*head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }

}

int IdenticalLL(node*  head1,node* head2){
    while(head1!=NULL&&head2!=NULL){
        if(head1->data!=head2->data){
            return 0;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return (head1==NULL && head2==NULL);
}

int main(){

    node *head1=NULL;
    node *head2=NULL;

    int noofNodes;
    printf("Enter no of Nodes:");
    scanf("%d",&noofNodes);
    
    printf("Enter data for first linked list:\n");
    for(int i=0; i<noofNodes;i++){
        addNode(&head1);
    }
    printf("Enter data for second linked list:\n");
    for(int i=0; i<noofNodes;i++){
        addNode(&head2);
    }

    if(IdenticalLL(head1,head2)){
        printf("The LL's are identical");
    }else{
        printf("The LL's are not identical");
    }

    return 0;
    
}