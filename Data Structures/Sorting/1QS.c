#include<stdio.h>
int partition(int arr[],int start,int end);
void swap(int* ptr1,int* ptr2);

void QuickSort(int arr[],int start,int end){
    if(start<end){
        int pivot=partition(arr,start,end);
        QuickSort(arr,start,pivot);
        QuickSort(arr,pivot+1,end);
    }
}
int partition(int arr[],int start,int end){
    int i=start-1;
    int j=end+1;
    int pivot=arr[start];
    while(1){

    do{
        i++;
    }while(arr[i]<pivot);
    do{
        j--;
    }while(arr[j]>pivot);

    if(i>=j){
        return j;
    }

    swap(&arr[i],&arr[j]);
}
}
void swap(int* ptr1,int* ptr2){
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
int main(){
    int arr[]={4,7,5,2,1,3,6};
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
//The Sorted array is:1  2  3  4  5  6  7 