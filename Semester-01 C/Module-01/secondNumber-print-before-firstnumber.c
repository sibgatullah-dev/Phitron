//Write a c program that will take 2 numbers from the user and then print the 2nd number first and then first number. 

#include  <stdio.h>
int main(){
    int firstNumber , secondNumber;
    scanf("%d %d", &firstNumber,&secondNumber);
    printf("%d %d",secondNumber,firstNumber);

    return 0;
}