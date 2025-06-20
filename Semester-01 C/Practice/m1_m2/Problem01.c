//Write a c program that takes a number as input and chesks wether the number is positive or negative .

#include<stdio.h>
int main(){
    int num ;
    scanf("%d",&num);
    if (num>0)
    {
        printf("The number is positive");
    }
    else{
        printf("The number is negative");
    }
    
    return 0;
}