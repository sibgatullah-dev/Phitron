//Codeforce
//print the divisors of N

#include <stdio.h>
int main(){
    int n, count;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(n%i==0){
            printf("%d\n",i);
            count++;
        }
    }
    printf("Total count is %d",count);

    return 0;
}