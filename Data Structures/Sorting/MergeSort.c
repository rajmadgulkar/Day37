#include<stdio.h>
void Merge(int arr[],int start, int mid,int end);
void MergeSort(int arr[],int start,int end){
    if (start<end){
        int mid=start+(end-start)/2;
        MergeSort(arr,start,mid);
        MergeSort(arr,mid+1,end);
        Merge(arr,start,mid,end);
    }
}
void Merge(int arr[],int start, int mid,int end){
    int ele1,ele2;
    ele1=mid-start+1;
    ele2=end-mid;
    int arr1[ele1],arr2[ele2];
    for(int i=0;i<ele1;i++){
        arr1[i]=arr[start+i];
    }
    for(int j=0;j<ele2;j++){
        arr2[j]=arr[mid+1+j];
    }
    int itr1=0,itr2=0,itr=start;
    while(itr1<ele1&&itr2<ele2){
        if(arr1[itr1]<arr2[itr2]){
            arr[itr]=arr1[itr1];
            itr1++;
        }else{
            arr[itr]=arr2[itr2];
            itr2++;
        }
        itr++;
    }
    while(itr1<ele1){
        arr[itr]=arr1[itr1];
        itr++;
        itr1++;
    }
    while(itr2<ele2){
        arr[itr]=arr2[itr2];
        itr++;
        itr2++;
    }
}
int main(){
    int arr[]={5,3,1,7,4,2,6,-3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=size-1;
    MergeSort(arr,start,end);
    printf("The Sorted array is:");
    for(int i=0;i<size;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
    return 0;
}
//The Sorted array is:-3  1  2  3  4  5  6  7 