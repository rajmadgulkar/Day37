#include<stdio.h>
int count(int arr[],int size){
    int key=arr[0];
    int count=0;

    for(int i=0;i<size;i++){
        if(arr[i]>key){
            count++;
        }        
    }
    return count;

}
int main(){
    int arr[]={2,3,-2,1,4,5,1,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int cnt=count(arr,size);
    printf("%d ",cnt);

    return 0;
}
//4 