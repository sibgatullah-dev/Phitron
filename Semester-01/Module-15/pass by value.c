#include<stdio.h>
void fun(int x){
    x = 10;
    printf("fun function x address : %p\n",&x);
}

int main(){
    int x = 10;
    fun(x);
    printf("main function x address : %p\n",&x);
    return 0;
}