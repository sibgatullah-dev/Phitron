#include<stdio.h>

int sum(){
    int a,b;
    scanf("%d %d",&a,&b);
    int add= a+b;
    return add;
}

int main(){
    int ans = sum();
    printf("%d",ans); 
    return 0;
}