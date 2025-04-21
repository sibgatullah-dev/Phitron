//Update or modify index'th value then print reverse.

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int indx, val;
    scanf("%d %d", &indx, &val);
    a[indx]=val;

    for (int i = n-1; i >= 0; i--)
    {
        
        printf("%d  ",a[i]);
        
    }
    return 0;
}