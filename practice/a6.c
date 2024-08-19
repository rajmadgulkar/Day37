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
int addFirst(){
    node *newNode=createNode();
    if(head==NULL){
        head=newNode;
        return 0;
    }else{
        newNode->next=head;
        head=newNode;
    }
}
void printSLL(){
    node *temp=head;
    while(temp!=NULL){
        printf("||%d||",temp->data);
        temp=temp->next;
    }
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
int addatPos(int pos){
    int cnt=countNode();
    if(pos<=0||pos>=cnt+2){
        return -1;
    }else if(pos==1){
        addFirst();
        return 0;
    }else if(pos==cnt+1){
        addNode();
        return 0;
    }else{
        node *newNode=createNode();
        node *temp=head;
        while(pos-2){
            temp=temp->next;
            pos--;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        return 0;
    }

}
int deleteFirst(){
    node *temp=head;
    head=temp->next;
    free(temp);
    return 0;
}
int deleteLast(){
    node *temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
    return 0;
}
int deleteatPos(int pos){
    int cnt=countNode();
    if(pos<=0||pos>=cnt+2){
        return -1;
    }else if(pos==1){
        deleteFirst();
        return 0;
    }else if(pos==cnt+1){
        deleteLast();
        return 0;
    }else{
        node *temp=head;
        while(pos-2){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        free(temp->next);
        return 0;
    }
}
int main(){

    char choice;
    do{

        printf("1.Addnode\n");
        printf("2.AddFirst\n");
        printf("3.AddatPos\n");
        printf("4.DeleteFirst\n");
        printf("5.DeleteLast\n");
        printf("6.DeleteatPos\n");
        printf("7.printSLL\n");


        int ch;
        printf("Enter choice of operation");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            addNode();
            break;
            case 2:
            addFirst();
            break;
            case 3:
            {
                int pos;
                printf("Enter position to add node:");
                scanf("%d",&pos);
                int ret=addatPos(pos);
                if(ret==-1){
                    printf("Invalid node position\n");
                }
            }
            break;
            case 4:
            deleteFirst();
            break;
            case 5:
            deleteLast();
            break;
            case 6:
            {
                int pos;
                printf("Enter position to delete node:");
                scanf("%d",&pos);
                deleteatPos(pos);
            }
            break;
            case 7:
            printSLL();
            break;
            default:
            printf("wrong choice of operation\n");
            break;
        }
        getchar();
        printf("Do you want to continue\n");
        scanf("%c",&choice);
    }while(choice=='Y'||choice=='y');

    return 0;
}
/*
1.Addnode
2.AddFirst
3.AddatPos
4.DeleteFirst
5.DeleteLast
6.DeleteatPos
7.printSLL
Enter choice of operation1
Enter data:10
Do you want to continue
y
1.Addnode
2.AddFirst
3.AddatPos
4.DeleteFirst
5.DeleteLast
6.DeleteatPos
7.printSLL
Enter choice of operation2
Enter data:5
Do you want to continue
y
1.Addnode
2.AddFirst
3.AddatPos
4.DeleteFirst
5.DeleteLast
6.DeleteatPos
7.printSLL
Enter choice of operation1
Enter data:20
Do you want to continue
y
1.Addnode
2.AddFirst
3.AddatPos
4.DeleteFirst
5.DeleteLast
6.DeleteatPos
7.printSLL
Enter choice of operation7
||5||||10||||20||Do you want to continue
y
1.Addnode
2.AddFirst
3.AddatPos
4.DeleteFirst
5.DeleteLast
6.DeleteatPos
7.printSLL
Enter choice of operation3
Enter position to add node:3
Enter data:15
Do you want to continue
y
1.Addnode
2.AddFirst
3.AddatPos
4.DeleteFirst
5.DeleteLast
6.DeleteatPos
7.printSLL
Enter choice of operation7
||5||||10||||15||||20||Do you want to continue
y
1.Addnode
2.AddFirst
3.AddatPos
4.DeleteFirst
5.DeleteLast
6.DeleteatPos
7.printSLL
Enter choice of operation4
Do you want to continue
y
1.Addnode
2.AddFirst
3.AddatPos
4.DeleteFirst
5.DeleteLast
6.DeleteatPos
7.printSLL
Enter choice of operation7
||10||||15||||20||Do you want to continue
y
1.Addnode
2.AddFirst
3.AddatPos
4.DeleteFirst
5.DeleteLast
6.DeleteatPos
7.printSLL
Enter choice of operation5
Do you want to continue
y
1.Addnode
2.AddFirst
3.AddatPos
4.DeleteFirst
5.DeleteLast
6.DeleteatPos
7.printSLL
Enter choice of operation7
||10||||15||Do you want to continue
y
1.Addnode
2.AddFirst
3.AddatPos
4.DeleteFirst
5.DeleteLast
6.DeleteatPos
7.printSLL
Enter choice of operation6
Enter position to delete node:2
Do you want to continue
y
1.Addnode
2.AddFirst
3.AddatPos
4.DeleteFirst
5.DeleteLast
6.DeleteatPos
7.printSLL
Enter choice of operation7
||10||Do you want to continue
n
*/