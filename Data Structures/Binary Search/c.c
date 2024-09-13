//Binary Search

#include<stdio.h>
int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
    }
    return -1;

}

void main(){
    int arr[]={2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=3;

    printf("%d",binarySearch(arr,size,key));
}
//1