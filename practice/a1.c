#include<stdio.h>

int sumofEle(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }

    return sum;

}

int main(){
    int size;
    printf("Enter array size:");
    scanf("%d",&size);

    int arr[size];

    printf("Enter Array elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int output=sumofEle(arr,size);
    printf("Outout: %d",output);

    return 0;


}