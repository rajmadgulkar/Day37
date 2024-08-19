#include<stdio.h>
int sumofEle(int arr[],int n){
    if(n==0){
        return 0;
    }else{
        return arr[0]+sumofEle(arr+1,n-1);
    }

}

int main(){
    int arr[]={10,20,30,40,50};

    int n=sizeof(arr)/sizeof(arr[0]);

    printf("Sum of elements are: %d",sumofEle(arr,n));

    return 0;

}
//Sum of elements are: 150