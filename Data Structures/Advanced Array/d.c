#include<stdio.h>
void leftMax(int arr[],int size){
    int leftMaxArr[size];
    for(int i=0;i<size;i++){
        int maxEle=arr[i];
        for(int j=0;j<i;j++){
            if(maxEle<arr[j]){
                maxEle=arr[j];
            }
        }
        leftMaxArr[i]=maxEle; 
    }

    for(int i=0;i<size;i++){
        printf("%d ",leftMaxArr[i]);
    }
}
int main(){
    int arr[]={5,2,1,-4,-2,9,3,4,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    leftMax(arr,size);
    return 0;
}
//5 5 5 5 5 9 9 9 9