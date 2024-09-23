#include<stdio.h>
void Sum(int arr[],int size){
    
    for(int i=0;i<size;i++){
        int sum=0;
        for(int j=i;j<size;j++){
            sum=sum+arr[j];
            printf("%d",sum);
            printf("\n");

        }

    }
}


int main(){
    int arr[]={2,4,1,5,-3,4,6,8,9,};
    int size=sizeof(arr)/sizeof(arr[0]);

    Sum(arr,size);
    return 0;
}
/*
2
6
7
12
9
13
19
27
36
4
5
10
7
11
17
25
34
1
6
3
7
13
21
30
5
2
6
12
20
29
-3
1
7
15
24
4
10
18
27
6
14
23
8
17
9
*/