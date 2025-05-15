//call stack concept on function gets called when another one is called in main function
#include<stdio.h>
void mello(){
    printf("Mello\n");
}
void gello(){
    printf("Gello\n");
    mello();
}
void hello(){
    printf("Hello\n");
    gello();
}
int main(){
    printf("Hi\n");
    hello();
    return 0;
}