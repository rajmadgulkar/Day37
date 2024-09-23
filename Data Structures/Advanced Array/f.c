//optimized Soln
#include<stdio.h>
void LeftMax(int arr[],int size){
    int LeftmaxArr[size];
    LeftmaxArr[0]=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>LeftmaxArr[i-1]){
            LeftmaxArr[i]=arr[i];
        }else{
            LeftmaxArr[i]=LeftmaxArr[i-1];
        }
    }

    for(int i=0;i<size;i++){
        printf("%d ",LeftmaxArr[i]);
    }
}

int main(){
    int arr[]={5,2,1,-4,-2,9,3,4,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    LeftMax(arr,size);
    return 0;
}
//5 5 5 5 5 9 9 9 9 