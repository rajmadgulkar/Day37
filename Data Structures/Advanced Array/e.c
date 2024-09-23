#include<stdio.h>
void RightMax(int arr[],int size){
    int RightMaxArr[size];
    for(int i=size-1;i>=0;i--){
        int maxEle=arr[i];
        for(int j=size-1;j>=i;j--){
            if(maxEle<arr[j]){
                maxEle=arr[j];
            }
        }
        RightMaxArr[i]=maxEle; 
    }

    for(int i=0;i<size;i++){
        printf("%d ",RightMaxArr[i]);
    }
}
int main(){
    int arr[]={5,2,1,-4,-2,9,3,4,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    RightMax(arr,size);
    return 0;
}
//9 9 9 9 9 9 7 7 7