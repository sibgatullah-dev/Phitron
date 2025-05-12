#include<stdio.h>
int main(){
    int x = 10;
    printf("%d\n",x);

    int* ptr;
    ptr = &x; //& andpercent or address of.
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
    *ptr=20;
    printf("%d\n",x);
    return 0;
}