#include <stdio.h>
int main(){
    int n,digits;
    scanf("%d",&n);
   while(n>0){
    digits = n%10;
    printf("%d\t",digits) ;
    n/=10;
   }
    
    return 0;
}