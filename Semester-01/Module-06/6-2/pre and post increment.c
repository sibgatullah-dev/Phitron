#include<stdio.h>
int main(){
    for(int i = 1 ; i<=5; i++){//Post increment execute first increment later 
        printf("%d\t",i);
    }
    for(int i = 1 ; i<=5; ++i){//Pre increment, increment first execute later 
        printf("%d\t",i);
    }
    printf("\n");
    int x = 10;
    int y = x++;// Value of x first comes in y and makes y = 10 and then x becomes 11 with the post increment 
    printf("%d %d\n",x,y);
    int a = 10;
    int b = ++a;// Vlaue of a fist increments to 11 and then it comes in b and makes b = 11 with the pre increment 
    printf("%d %d",a,b);
    return 0;
}