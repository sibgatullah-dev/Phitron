#include<stdio.h>
int main(){
    int x,y,sum;
    scanf("%d %d",&x,&y);
    sum = 0;
   
    if (x>y){
        int z = x;
        x = y;
        y = z;
    }    
    for (int i = x+1; i < y; i++)
    {
        if(i%2!=0){
            sum = sum+i;
        }
    }
    printf("%d",sum);
    
    return 0;
}