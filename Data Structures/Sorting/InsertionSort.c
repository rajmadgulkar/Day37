#include<stdio.h>
void InsertionSort(int arr[],int size){

    for(int i=1;i<=size-1;i++){
        int val=arr[i];
        int j=i-1;
        for(;j>=0&&arr[j]>val;j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=val;
    }
}
int main(){
    int arr[]={4,-2,7,1,-5,8,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr,size);
    printf("The Sorted array is:");
    for(int i=0;i<size;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");

}
//The Sorted array is:-5  -2  1  4  5  7  8 