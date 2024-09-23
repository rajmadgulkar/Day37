//Subarray Problems
#include<stdio.h>
void printSubarray(int arr[],int size){

    printf("The suarrays are:\n");

    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            for(int k=i;k<=j;k++){
                printf("%d ",arr[k]);
            }
            printf("\n");
        }
    }
}
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int size=sizeof(arr)/sizeof(arr[0]);

    printSubarray(arr,size);
    return 0;
}
/*
The suarrays are:
-2
-2 1
-2 1 -3
-2 1 -3 4
-2 1 -3 4 -1
-2 1 -3 4 -1 2
-2 1 -3 4 -1 2 1
-2 1 -3 4 -1 2 1 -5
-2 1 -3 4 -1 2 1 -5 4
1
1 -3
1 -3 4
1 -3 4 -1
1 -3 4 -1 2
1 -3 4 -1 2 1
1 -3 4 -1 2 1 -5
1 -3 4 -1 2 1 -5 4
-3
-3 4
-3 4 -1
-3 4 -1 2
-3 4 -1 2 1
-3 4 -1 2 1 -5
-3 4 -1 2 1 -5 4
4
4 -1
4 -1 2
4 -1 2 1
4 -1 2 1 -5
4 -1 2 1 -5 4
-1
-1 2
-1 2 1
-1 2 1 -5
-1 2 1 -5 4
2
2 1
2 1 -5
2 1 -5 4
1
1 -5
1 -5 4
-5
-5 4
4
*/