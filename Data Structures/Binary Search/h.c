#include<stdio.h>
int repEle(int arr[],int size){

    for(int i=0;i<size;i++){
        for(int j=1;j<size;j++){
            if(arr[i]==arr[j]){

                return arr[i];
            }
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,2,6,8};
    int size=sizeof(arr)/sizeof(arr[0]);

    printf("The repeated element in an array is: %d",repEle(arr,size));



    return 0;
}
//The repeated element in an array is: 2