//Take an array from input and count how many odd numbers are present in that array.

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i]%2!=0)
        {
            count++;
        }
        
    }
    printf("%d",count);
    
    
    return 0;
}