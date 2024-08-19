#include<stdio.h>

int largestNum(int arr[],int size){

    int max=arr[0];

    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;


}

int main(){

    int size;
    printf("Enter array size:");
    scanf("%d",&size);

    int arr[size];

    printf("Enter array elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("Largest number in an array is:%d",largestNum(arr,size));

    return 0;

    
}
/*
Enter array size:6
Enter array elements:14
25
54
34
41
55
Largest number in an array is:55*/
