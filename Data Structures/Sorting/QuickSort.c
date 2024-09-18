#include<stdio.h>
int partition(int arr[],int start,int end);
void swap(int* ptr1,int* ptr2);
void QuickSort(int arr[],int start,int end){
    if(start<end){
        int pivot=partition(arr,start,end);
        QuickSort(arr,start,pivot-1);
        QuickSort(arr,pivot+1,end);
    }
}
int partition(int arr[],int start,int end){
    int pivot=arr[end];
    int itr=start-1;
    for(int i=start;i<end;i++){
        if(arr[i]<pivot){
        itr++;
        swap(&arr[i],&arr[itr]);
        }
    }
    swap(&arr[itr+1],&arr[end]);
    return itr+1;
}
void swap(int* ptr1,int* ptr2){
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
int main(){
    int arr[]={4,2,1,-4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int end=size-1;
    int start=0;
    QuickSort(arr,start,end);

        printf("The Sorted array is:");
    for(int i=0;i<size;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
    return 0;
}
//The Sorted array is:-4  1  2  4  5  6  