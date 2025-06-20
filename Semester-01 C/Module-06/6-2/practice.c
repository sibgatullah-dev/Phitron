#include<stdio.h>
int main(){
    int x,y,z;
    x = 10;
    y = x++;//y = 10 then x becomes 11
    z = ++y;//y = 10 then y becomes 11 and z becomes 11
    printf("%d\t", z++);// z became 12 but got printed before the increment so even if z is now 12 it shows 11
    printf("%d",z);
    return 0;
}