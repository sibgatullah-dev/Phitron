#include <stdio.h>
 int main(){
    int taka ;
    scanf("%d", &taka);

    if(taka >= 5000){
        printf("lets go to cox's bazar\n");
        if (taka >=3000)
        {
            printf("lets go to saint martin\n");
        }
        else{
            printf("not going to saint martin\n");
        }
        
    }
    else{
        printf("not going");
    }
    return 0;
 }