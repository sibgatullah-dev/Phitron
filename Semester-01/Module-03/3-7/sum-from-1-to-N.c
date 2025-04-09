#include<stdio.h>
int main(){
    int n, sum;
    scanf("%d",&n);
    sum = 0;// The value is assigned 0 because if we don't do that the loop will sum with the grabage value of the variable
    for (int i = 0; i <=n; i++)
    {
        sum = sum + i;
    }
    printf("%d\n",sum);
    return 0;
}