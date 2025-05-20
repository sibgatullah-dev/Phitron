#include<stdio.h>
int main(){
    int n;scanf("%d",&n);
    int top;
    if (n==1)
    {
        top=6;
    }
    
    if (n==3)
    {
        top=7;
    }
    
    if (n==5)
    {
        top=8;
    }
    if (n==7)
    {
        top=9;
    }
    if (n==9)
    {
        top=10;
    }
    if (n==11)
    {
        top=11;
    }
    if (n==13)
    {
        top=12;
    }
    if (n==15)
    {
        top=13;
    }
    if (n==17)
    {
        top=14;
    }
    if (n==19)
    {
        top=15;
    }

    if (n==21)
    {
        top=16;
    }
    
   
    
    
    int star=1;

    for (int i = 1; i <= top; i++)// For printing rows
    {
        for (int s = top-i; s >=1; s--)//For printing space
        {
            printf(" ");
        }
        
        for(int j = 1;j<=star;j++){ //For printing stars
            printf("*");
        }
        printf("\n");
        star += 2;
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }  
        printf("\n"); 
    }
    
    return 0;
}