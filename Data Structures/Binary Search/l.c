#include<stdio.h>

int subSum(int arr[],int size){
    int maxSum=arr[0];

    for(int i=0;i<size;i++){
        int currSum=0;
        for(int j=i;j<size;j++){
            currSum+=arr[j];

            if(currSum>maxSum){
                maxSum=currSum;
            }
            
        }
    }
    return maxSum;
}


int main(){
    int arr[]={2,3,-8,7,-1,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);

    printf("%d is the maxSum of an subarray\n",subSum(arr,size));


    return 0;

}
//11 is the maxSum of an subarray