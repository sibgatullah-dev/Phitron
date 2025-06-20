#include<stdio.h>
int main(){
    int n,N,j;
    scanf("%d",&n);
    N=n/2;
    j=N;
    for(int i = 1;i<=N;i++){
       for(j = N; j >= 1; j--){
            if (N*i==n)
            {
                printf("%d\n%d\n",j,i);
            }
        
       }
    }
    return 0;
}
//Bugged code , still not solved...