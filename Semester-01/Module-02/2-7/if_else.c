#include <stdio.h>

int main(){
    int tk;
    scanf("%d", &tk);
    if (tk >= 100){
        printf("Let's eat burger\n");
    } 
    else if(tk >= 50 && tk< 100){
        printf("let's eat fuchka\n");
    }
    else{
        printf("Not gonna eat \n");
    }

    return 0;
}