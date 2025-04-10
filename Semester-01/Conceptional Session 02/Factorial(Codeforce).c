#include<stdio.h>
int main(){
  int T;
  scanf("%d",&T);
  for (int tc = 1; tc <= T; tc++)
  {
    long long int N , f;
    scanf("%lld",&N);
    f = 1;
    for(long long int i =N;i>0;i--){
        f = f*i;
    }
    printf("%lld\n",f);
  }
  
    return 0;
}