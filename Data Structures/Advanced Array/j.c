//Subarray Problems
#include<stdio.h>
void printSubarraySum(int arr[],int size){

    printf("The sum of subarrays are:\n");

    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum=sum+arr[k];
            }
            printf("%d ",sum);
            printf("\n");
        }
    }
}
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int size=sizeof(arr)/sizeof(arr[0]);

    printSubarraySum(arr,size);
    return 0;
}
/*The sum of subarrays are:
-2
-1
-4
0
-1
1
2
-3
1
1
-2
2
1
3
4
-1
3
-3
1
0
2
3
-2
2
4
3
5
6
1
5
-1
1
2
-3
1
2
3
-2
2
1
-4
0
-5
-1
4
*/