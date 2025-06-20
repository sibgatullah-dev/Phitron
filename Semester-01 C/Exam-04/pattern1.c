#include<stdio.h>
int main(){
    int n;scanf("%d",&n);
    int star =1;

    //First half
    for (int i = 1; i <= n; i++)// For printing rows
    {
        for (int s = n-i; s >=1; s--)//For printing space
        {
            printf(" ");
        }
        
        for(int j = 1;j<=star;j++){ //For printing stars
            if (i%2!=0)
            {
                printf("#");
            }
            else if(i%2==0){
                printf("-");
            }
            
        }
        printf("\n");
        star += 2;
    }

    //Second half
    for (int i = n-1; i >=1 ; i--)// For printing rows
    {
        for (int s = 1; s <=n-i; s++)//For printing space
        {
            printf(" ");
        }
        for(int j = star-4;j>=1;j--){ //For printing stars
           if (i%2!=0)
            {
                printf("#");
            }
            else if(i%2==0){
                printf("-");
            }
        }
        
        printf("\n");
        star -= 2;
    }
    
    return 0;
}