#include<stdio.h>
int main(){

    int N;
    scanf("%d",&N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);  
    }

    int X;
    scanf("%d",&X);
    int V;
    scanf("%d",&V);
    A[X]=V;

    for (int i = N-1; i>=0; i--)
    {
        printf("%d ",A[i]);
    }
    
    return 0;
}