#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i==6){
            break;
        }
        printf("%d\t",i);// it will print only 5 cause when i =  the loop will get break and 6 won't get print!!
    }
    return 0;
}