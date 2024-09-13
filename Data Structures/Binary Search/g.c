#include<stdio.h>

int missEle(int arr[],int n){
    int totSum=((n+1)*(n+2))/2;
    int arrSum=0;
    
    for(int i=0;i<n;i++){
        arrSum+=arr[i];
    }
    return totSum-arrSum;
}



void main(){
    int arr[]={1,2,3,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("The missing element in an array is %d",missEle(arr,n));

}
//The missing element in an array is 4