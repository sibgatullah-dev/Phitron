//You will be given two integers A and B. You need to give output their multiplication.

#include<stdio.h>
int main(){
    long long int A, B;
    scanf("%lld %lld",&A,&B);
    long long int multiply = A*B;
    printf("%lld", multiply);
    return 0;
}