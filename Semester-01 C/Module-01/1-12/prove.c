#include<stdio.h>
int main(){
    int a = 10000000000;// int has space of 32 bits which can old numbers upto 10^9 any bigger then this number will misbehave  
    long long int b = 100000000000000;

    float f = 2134.56789123;
    double g = 12345.123456789;
    printf("%d %f %f",a,f,g);
    printf("%lld",b);
    return 0;
}