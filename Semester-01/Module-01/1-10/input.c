#include<stdio.h>

int main(){
    int a;
    long long int b;
    float f;
    char c;
    scanf("%d %lld %f %c",&a,&b,&f,&c);// The sign & is used to get in a variable and make change in the variable value
    
    printf("%d %lld %.2f %c", a,b, f, c);
    return 0;
}