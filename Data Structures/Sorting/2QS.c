#include<stdio.h>
int partition(int arr[],int start,int end);
void QuickSort(int arr[],int start,int end){
    if(start<end){
        int pivot=partition(arr,start,end);
        QuickSort(arr,start,pivot-1);
        QuickSort(arr,pivot+1,end);
    }
}
int partition(int arr[],int start,int end){
    int tempArr[end-start+1];
    int index=0;
    int pivot=arr[end];
    for(int i=start;i<end;i++){
        if(arr[i]<pivot){
            tempArr[index++]=arr[i];
        }
    }
    int pos=index+start;
    tempArr[index++]=pivot;
    for(int i=start;i<end;i++){
        if(arr[i]>pivot){
            tempArr[index++]=arr[i];
        }
    }
    for(int i=start;i<=end;i++){
        arr[i]=tempArr[i-start];
    }
    return pos;

}
int main(){
    int arr[]={4,3,7,9,1,2,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=size-1;
    QuickSort(arr,start,end);

    printf("The Sorted array is:");
    for(int i=0;i<size;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");

    return 0;
}
//The Sorted array is:1  2  3  4  5  7  9  