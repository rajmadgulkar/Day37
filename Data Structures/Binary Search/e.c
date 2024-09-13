//Ceiling Code
#include<stdio.h>
int CeilingEle(int arr[],int size,int key){

    int start=0;
    int end=size-1;
    int store;

    while(start<=end){
        int mid=(start+end)/2;

        if(arr[mid]==key){
            return arr[mid];
        }
        if(arr[mid]>key){
            store=arr[mid];
            end=mid-1;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
    }
    return store;

}
void main(){
    int arr[]={2,4,5,7,11,17,21};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=14;

    printf("%d",CeilingEle(arr,size,key));

}
//17