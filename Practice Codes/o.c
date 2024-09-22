#include<stdio.h>
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    int max=arr[0];
    int sum=0;

    for(int i=0;i<size;i++){
        sum=sum+arr[i];
        if(sum<0){
            sum=0;
        }
        if(max<sum){
            max=sum;
        }

    }
    printf("%d ",max);
    return 0;
}
//6 