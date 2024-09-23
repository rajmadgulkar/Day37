 #include<stdio.h>
 void prefixSum(int arr[],int size){
    int prefixArr[size];
    
    prefixArr[0]=arr[0];
    for(int i=1;i<size;i++){
        prefixArr[i]=prefixArr[i-1]+arr[i];
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
 //The prefix Array is:-7 4 25 21 18 23 31 33 21 