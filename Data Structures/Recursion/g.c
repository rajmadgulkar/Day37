#include<stdio.h>
int sumOfarray(int arr[],int n){
    if(n==0){
        return arr[0];
    }else{
        return arr[n]+sumOfarray(arr,n-1);
    }

}
void main(){
    int arr[]={1,2,3,4,5,6};
    int n=5;
    int sum=sumOfarray(arr,n);
    printf("%d\n",sum);
    



}