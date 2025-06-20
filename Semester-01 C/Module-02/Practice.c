#include <stdio.h>
int main(){
    int number ;
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("the number is even\n");
    }
    else{
        printf("The number is odd\n");
    }
    if (number<0)
    {
        printf("its a negative number\n");
    }
    else{
        printf("it's a positive number\n");
    }
    
    

    return 0;
}