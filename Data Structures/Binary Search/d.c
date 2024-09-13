//Floor Code
#include<stdio.h>
int floorEle(int arr[],int size,int key){

    int start=0;
    int end=size-1;
    int store;

    while(start<=end){
        int mid=(start+end)/2;

        if(arr[mid]==key){
            return arr[mid];
        }
        if(arr[mid]<key){
            store=arr[mid];
            start=mid+1;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
    }
    return store;

}
void main(){
    int arr[]={2,4,5,7,11,17,21};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=14;

    printf("%d",floorEle(arr,size,key));

}
//11