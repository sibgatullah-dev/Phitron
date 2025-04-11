#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1; i<=n;i++){
        if(i==5){
            continue;//The 5 that got the continue statement will get skipped and the rest of the numbers wil print fine 
        }
        printf("%d\t",i);
    }
    return 0;
}