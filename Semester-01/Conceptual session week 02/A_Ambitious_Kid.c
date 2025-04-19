#include<stdio.h>
int main(){
    int n; 
    scanf("%d",&n);
    int min = 100000+1;
    for (int  i = 0; i < n; i++)
    {
        int x;
        scanf("%d",&x);

        if(x<0){
            x = x*(-1);
        }
        if(min>x){
            min = x;
        }

    }
    printf("%d\n",min);
    
    return 0;
}