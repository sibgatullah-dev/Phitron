// Controlling recursion
#include<stdio.h>
void num(int i){
    int j = i;
    printf("%d\t",j);
    if (j==5)
    {
        return;
    }
    num(j+1);
    
}
int main(){
    num(1);
    return 0;
}