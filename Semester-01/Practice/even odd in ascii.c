#include <stdio.h>
int main(){
    char X;
    scanf("%c",&X);//As the input mathod is char no matter how big the number is it will take the first number as input 
    if (X%2==0)// This line will compare with the inut's ascii value and check if the number is even or odd
    {
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
    
    return 0;
}