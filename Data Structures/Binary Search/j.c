
//return max rep element in an array
#include<stdio.h>
int repElecnt(int arr[],int size){
    int maxCount=0;
    int maxElement=-1;

    for(int i=0;i<size;i++){
        int count=0;
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxCount){
            maxCount=count;
            maxElement=arr[i];
        }
    }
    return maxElement;
}
int main(){
    int arr[]={1,2,3,2,1,2,6,8};
    int size=sizeof(arr)/sizeof(arr[0]);

    printf("The max repeated element count in an array is: %d",repElecnt(arr,size));



    return 0;
}
//The max repeated element count in an array is: 2