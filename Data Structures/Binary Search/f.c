//First Occurence index using binary

#include<stdio.h>
int firstOcc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int store=-1;
    while(start<=end){
        int mid=(start+end)/2;

        if(arr[mid]==key){
            store=mid;
            if(arr[mid-1]!=key){
                return mid;
            }
            end =mid-1;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
    }
}
void main(){
    int arr[]={2,3,3,4,4,4,4,5,6,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=4;

    printf("The first occurred index for %d is %d\n",key,firstOcc(arr,size,key));

}
//The first occurred index for 4 is 3