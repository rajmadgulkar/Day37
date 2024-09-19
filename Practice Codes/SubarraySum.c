#include<stdio.h>
void SubSum(int arr[],int n, int s){
    

    for(int i=0;i<n;i++){
        int currSum=0;
        for(int j=i;j<n;j++){

            currSum=currSum+arr[j];

            if(currSum==s){
                printf("%d %d\n",i+1,j+1);
            }
        }
    }
}

int main(){
    int arr[]={1,2,3,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=12;

    SubSum(arr,n,s);

    return 0;
}
/*
2 4
4 5
*/