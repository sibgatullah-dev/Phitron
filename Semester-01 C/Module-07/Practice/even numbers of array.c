//Take an array from input and print all the even numbers of that array.

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i]%2==0)
        {
            printf("%d ",array[i]);
        }
        
    }
    
    
    return 0;
}