#include<stdio.h>
void SumofArr(int arr1[],int arr2[],int size){
    int sumArr[size];
    for(int i=0;i<size;i++){
        sumArr[i]=arr1[i]+arr2[i];
    }
    for(int j=0;j<size;j++){
        printf("  %d",sumArr[j]);
    }
}
int main(){
    int arr1[]={6,5,3,7};
    int arr2[]={2,10,4,6};
    int size=sizeof(arr1)/sizeof(arr1[0]);
    SumofArr(arr1,arr2,size);
    return 0;
}
//  8  15  7  13