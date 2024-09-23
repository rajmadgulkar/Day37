 #include<stdio.h>
 void prefixSum(int arr[],int size){
    int prefixArr[size];
    
    prefixArr[size-1]=arr[size-1];
    for(int i=size-2;i>=0;i--){
        prefixArr[i]=prefixArr[i+1]+arr[i];
    }

    printf("The prefix Array is:");
    for(int j=0;j<size;j++){
        printf("%d ",prefixArr[j]);
    }
 }
 int main(){
    int arr[]={-7,11,21,-4,-3,5,8,2,-12};
    int size=sizeof(arr)/sizeof(arr[0]);
    prefixSum(arr,size);

    return 0;
 }
 //The prefix Array is:21 28 17 -4 0 3 -2 -10 -12 