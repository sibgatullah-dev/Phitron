#include<stdio.h>

int main(){
    int  b , sum, sub, mul ;
    float a, div;
    scanf("%f %d",&a,&b);
    sum = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;
    printf("Summation is %d\n",sum);
    printf("Subtraction is %d\n",sub);
    printf("Multiplication is %d\n",mul);
    printf("Division is %.2f\n",div);

    return 0;
}