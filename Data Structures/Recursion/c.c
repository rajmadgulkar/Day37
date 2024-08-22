#include<stdio.h>
int fact=1;
int factorial(int num){
    
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
