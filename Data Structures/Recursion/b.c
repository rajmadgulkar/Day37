#include<stdio.h>
void fun(int x){
    printf("Hello\n");
    if(x!=1){
        fun(--x);
    printf("Bye\n");

    }

}
void main(){
    fun(5);
}
/*
Hello
Hello
Hello
Hello
Hello
Bye
Bye
Bye
Bye
*/