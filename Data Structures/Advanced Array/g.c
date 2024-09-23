#include<stdio.h>
void RightMax(int arr[],int size){
    int RightMaxArr[size];
    RightMaxArr[size-1]=arr[size-1];
    for(int i=size-2;i>=0;i--){
        if(arr[i]>RightMaxArr[i+1]){
            RightMaxArr[i]=arr[i];
        }else{
            RightMaxArr[i]=RightMaxArr[i+1];
        }
    }
    for(int i=0;i<size;i++){
        printf("%d ",RightMaxArr[i]);
    }

}
int main(){
    int arr[]={5,2,1,-4,-2,9,3,4,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    RightMax(arr,size);
    return 0;
}
//9 9 9 9 9 9 7 7 7 