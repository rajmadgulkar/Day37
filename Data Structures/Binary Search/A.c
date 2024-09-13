#include<stdio.h>
int ifPresent(int arr[],int size,int key){
    
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
void main(){
    int arr[]={2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=5;
    int index=ifPresent(arr,size,key);
    printf("%d is the index of the key\n",index);


}