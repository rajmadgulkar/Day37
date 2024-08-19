#include<stdio.h>

#define R1 2
#define C1 3
#define R2 2
#define C2 3

void matAdd(int mat1[][C1],int mat2[][C2]){

    int rslt[R1][C2];

    for(int i=0;i<R1;i++){
        for(int j=0;j<C2;j++){
            rslt[i][j]=0;
            rslt[i][j]=mat1[i][j]+mat2[i][j];     
            printf("  %d",rslt[i][j]);
        }
        printf("\n");
    }

}

int main(){
    int mat1[R1][C1]={{2,3,4},{5,6,7}};
    int mat2[R2][C2]={{2,3,5},{4,5,7}};

    matAdd(mat1,mat2);
    return 0;

}