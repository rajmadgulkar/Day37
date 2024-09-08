#include<stdio.h>

int sumofDigits(int num){
    if(num==0){
        return 0;
    }else{
        return (num%10)+sumofDigits(num/10);
    }
}
void main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("%d\n",sumofDigits(num));  

}
/*Enter a number:652
13
*/