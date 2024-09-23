#include<stdio.h>
void prefixSum(int arr[],int size){
    int prefixArr[size];
    prefixArr[0]=arr[0];

    for(int i=1;i<size;i++){
        prefixArr[i]=prefixArr[i-1]+arr[i];
    }

    for(int i=0;i<size;i++){
        printf("%d ",prefixArr[i]);
    }
}


int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int size=sizeof(arr)/sizeof(arr[0]);

    prefixSum(arr,size);
    return 0;
}
//-2 -1 -4 0 -1 1 2 -3 1 