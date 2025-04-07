#include<stdio.h>

int main(){
    int a , b , sum, sub, mul, div ;
    scanf("%d %d",&a,&b);
    sum = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;
    printf("Summation is %d\n",sum);
    printf("Subtraction is %d\n",sub);
    printf("Multiplication is %d\n",mul);
    printf("Division is %d\n",div);

    return 0;
}