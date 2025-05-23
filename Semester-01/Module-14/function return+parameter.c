#include<stdio.h>

int sum(int a,int b){
    int plus= a+b;
    return plus;
}
int sub(int a , int b){
    int minus = a-b;
    return minus;
}

int main(){
    int a,b;scanf("%d %d",&a,&b);
    int ans = sum(a,b);
    int ans2 = sub(a,b);
    printf("%d %d",ans,ans2); 
    return 0;
}