#include<stdio.h>
int x = 10;// Global variable scope

int sum(){
    printf("%d",x);
}

int main(){
    printf("%d",x); 
    return 0;
}