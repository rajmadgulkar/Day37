
// Need to learn hashing concept 
#include<stdio.h>
#include<stdlib.h>

void findOddocc(int arr[],int size){
    int max=0;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    int *hashtable=(int*)calloc(max+1,sizeof(int));

    for (int i = 0; i < size; i++) {
        hashtable[arr[i]]++;
    }

    for(int i=0;i<=max;i++){
        if(hashtable[i]%2!=0){
            printf("%d",i);
        }
    }
    printf("\n");
    free(hashtable);
}
int main(){

    int arr[]={4,3,4,5,5,3,5,7,8,8,7,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    findOddocc(arr,size);

    return 0;
}
//57