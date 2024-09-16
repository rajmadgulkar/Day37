#include<stdio.h>
int Smallest(int arr[],int size){
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(min>arr[i+1]){
            min=arr[i+1];
            arr[0]=min;
        }
    }
    return arr[0];
}
int main(){
    int arr[]={4,3,8,-4,2,9,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Smallest Element in an array & at 0th position is:%d",Smallest(arr,size));
    return 0;
}
//Smallest Element in an array & at 0th position is:-4