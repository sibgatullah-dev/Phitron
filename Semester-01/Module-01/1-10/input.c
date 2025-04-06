#include<stdio.h>

int main(){
    int a;
    float f;
    char c;
    scanf("%d %f %c",&a,&f,&c);// The sign & is used to get in a variable and make change in the variable value
    
    printf("%d %.2f %c", a, f, c);
    return 0;
}