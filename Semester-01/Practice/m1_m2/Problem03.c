// Write a c program to check whether a given number is even or odd and, if it is also divisible by 4?

#include<stdio.h>
int main(){
    int num ;
    scanf("%d", &num);

    if (num % 2 ==0)
    {
        printf("The number is even\n");
        if (num %4 == 0)
        {
            printf("The number is divisible by 4\n");
        }
        else{
            printf("the number isn't divisible by 4\n");
        }
        
    }
    else{
        printf("The number is odd\n");
    }
    

    return 0;
}