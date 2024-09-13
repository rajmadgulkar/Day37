#include<stdio.h>
int lastOccurence(int arr[],int size, int key){
    int lstore=-1;

    for(int i=0; i<size;i++){
        if(arr[i]==key){
            lstore=i;
        }
    }
    return lstore;
}


void main(){
    int arr[]={2,4,2,8,9,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=2;

    printf("%d",lastOccurence(arr,size,key));


}
//5