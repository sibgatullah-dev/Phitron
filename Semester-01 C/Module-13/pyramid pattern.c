#include<stdio.h>
int main(){
    int n;scanf("%d",&n);
    int star =1;
    for (int i = 1; i <= n; i++)// For printing rows
    {
        for (int s = n-i; s >=1; s--)//For printing space
        {
            printf(" ");
        }
        
        for(int j = 1;j<=star;j++){ //For printing stars
            printf("*");
        }
        printf("\n");
        star += 2;
    }
    
    return 0;
}