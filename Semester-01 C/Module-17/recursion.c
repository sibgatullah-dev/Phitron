#include<stdio.h>

void hello(){
    printf("Hello\n");
    hello(); // hello function is calling it's self so it's recursive function . (this function is working like an infinit loop)
}
int main(){
    printf("Hi\n");
    hello();
    return 0;
}