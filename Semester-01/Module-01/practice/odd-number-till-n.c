#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1; i<=n;i+=2){
        printf("%d\t",i);
    }
    return 0;
}