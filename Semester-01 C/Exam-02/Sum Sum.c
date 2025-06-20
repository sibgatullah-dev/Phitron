#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int array[N];
    int sump=0,sumn=0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&array[i]);
        if(array[i]>0){
            sump += array[i] ;
        }
        else{
            sumn += array[i];
        }
    }
    printf("%d ",sump);
    printf("%d",sumn);
    
    
    return 0;
}