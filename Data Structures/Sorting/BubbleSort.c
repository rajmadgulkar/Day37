#include<stdio.h>
void bubbleSort(int arr[],int size){

    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}


int main(){
    int arr[]={26,79,97,21,59,85,43,78,95,3};
    int size=sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,size);

    printf("The Sorted array is:");
    for(int i=0;i<size-1;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");

    return 0;
}

//The Sorted array is:3  21  26  43  59  78  79  85  95  