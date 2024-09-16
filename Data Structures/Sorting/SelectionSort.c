#include<stdio.h>
void SelectionSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int minIndex=i;
        for(int j=i+1;j<size;j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
}
int main(){
    int arr[]={2,-7,-5,3,1,8,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    SelectionSort(arr,size);

    printf("The Sorted array is:");
    for(int i=0;i<size;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");

    return 0;
}
//The Sorted array is:-7  -5  1  2  3  5  8  