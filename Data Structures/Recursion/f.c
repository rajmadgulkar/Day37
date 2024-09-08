#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(char str[],int start,int end){
    if(str[start]!=str[end]){
        return false;
    }
    if(start>=end){
        return true;
    }
    return isPalindrome(str,start+1,end-1);

} 
int main(){
    char str[]="racecar";
    int n=7;

    if(isPalindrome(str,0,n-1)){
        printf("The string is a Palindrome\n");

    }else{
        printf("The string is not a palindrome\n");
    }
    return 0;

}