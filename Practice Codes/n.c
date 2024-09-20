//Write a program in C to count the total number of duplicate elements in an array.

#include<stdio.h>
int RepElements(int arr[],int size){
    int noofrepEle=0;


    for(int i=0;i<size;i++){
        int count=0;
        for(int j=i+1;j<size;j++){

            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>0){
            noofrepEle++;
        }
    }
return noofrepEle;
}
int main(){
    int arr[]={2,3,4,5,2,4,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int repele=RepElements(arr,size);
    printf("%d ",repele);
    return 0;
}