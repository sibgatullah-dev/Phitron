#include<stdio.h>
int main(){
  int T;
  scanf("%d",&T);
  for (int tc = 1; tc <= T; tc++)
  {
    int N , f;
    scanf("%d",&N);
    f = 1;
    for(int i =N;i>0;i--){
        f = f*i;
    }
    printf("%d\n",f);
  }
  
    return 0;
}