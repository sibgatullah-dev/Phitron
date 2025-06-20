#include<stdio.h>
int main(){

    int a[5] = {10,20,30,40,50};
    printf("%p\n",&a[0]);
    printf("%p\n",&a[1]);
    printf("%p\n",&a[2]);
    printf("%p\n",&a[3]);
    printf("%p\n",&a[4]);
    //Dereference in array
    *(a+1)=100; // As array name is actually a pointer so we can point out which index value we want to dereference and change
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0; 
}