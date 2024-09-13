
//return no of times a particular no is repeated
#include<stdio.h>
int repElecnt(int arr[],int size){

    int count=0;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count++;   
            }
        }
    }
    return count;
}
int main(){
    int arr[]={1,2,3,2,5,2,6,8};
    int size=sizeof(arr)/sizeof(arr[0]);

    printf("The repeated element count in an array is: %d",repElecnt(arr,size));



    return 0;
}
//The repeated element count in an array is: 3