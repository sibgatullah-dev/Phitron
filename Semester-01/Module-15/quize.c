#include<stdio.h>
// void m(int* p){
//     int i = 0;
//     for ( i = 0; i < 5; i++)
//     {
//         printf("%d",p[i]);
//     }
    
// }

int main(){
    int a[4]={1,2,3,4};
    int *p;
    p = a+3;
    *p=5;
    printf("%d",a[3]);
    return 0;
}