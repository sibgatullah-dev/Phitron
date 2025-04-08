#include<stdio.h>

int main(){
    int  b,c , sum, sub, mul,mod ;
    float a, div;
    scanf("%f %d %d",&a,&b,&c);
    sum = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;
    mod = b%c;
    printf("Summation is %d\n",sum);
    printf("Subtraction is %d\n",sub);
    printf("Multiplication is %d\n",mul);
    printf("Division is %.2f\n",div);
    printf("Modulous is %d\n" ,mod);

    return 0;
}