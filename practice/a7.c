//Pair with given sum(Two Sum)
#include<stdio.h>
int pairSum(int arr[],int size,int x){

    for(int i=0;i<(size-1);i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==x){
                return 1;
            }
        }
    }
    return 0;
    
}
int main(){
    int arr[]={1,-2,1,0,5};
    int size=(sizeof(arr)/sizeof(arr[0]));
    int x=0;

    if(pairSum(arr,size,x)){
        printf("Yes\n");
    }else{
        printf("No\n");
    }




}