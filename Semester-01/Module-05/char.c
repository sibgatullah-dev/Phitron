#include<stdio.h>
int main(){
    char X;
    int Y;
    scanf("%c",&X);
    Y=("%d",X);
    if(Y<91){
        Y=Y+32;
        printf("%c",Y);
    }
    else if(Y>96){
        Y=Y-32;
        printf("%c",Y);
    }
    
    return 0;
}