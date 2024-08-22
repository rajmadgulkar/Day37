#include<stdio.h>

int factorial(int num){
    static int fact=1;
    
    fact=fact*num;
    if(num!=1){
        factorial(--num);
    }
    return fact;

}
void main(){
    int ret=factorial(5);
    printf("%d",&ret);
}
//120