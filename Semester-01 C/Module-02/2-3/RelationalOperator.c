#include<stdio.h>

int main(){
    int a, b, graterThen, lessThen, graterEqualthen, lessEqualthen, equale, notEquale ;

    scanf("%d %d",&a, &b);
    graterThen = a>b;
    lessThen = a<b;
    graterEqualthen = a>=b;
    lessEqualthen = a<=b;
    equale = a==b;
    notEquale = a!=b;

    printf("A greater then B :%d\n",graterThen);
    printf("A less then B :%d\n",lessThen);
    printf("A greater equal to  B :%d\n",graterEqualthen);
    printf("A less equal to B :%d\n",lessEqualthen);
    printf("A equal to  B :%d\n",equale);
    printf("A not equal to B :%d\n",notEquale);

    return 0;
}