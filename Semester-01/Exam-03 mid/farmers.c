#include<stdio.h>
int main(){
    int t;scanf("%d",&t);
    while (t--)
    {
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);
        int n = m1 + m2;
        int newtime = (m1*d)/n;
        int reduceD = d-newtime;
        printf("%d\n",reduceD);
    }
    
    return 0;
}