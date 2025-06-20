#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int x =N%10;
    N /= 10;

    if(x==0){
        printf("YES");
    }
    else if (N%x==0||x%N==0)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}