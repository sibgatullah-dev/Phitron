#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch;
    char s[100];
    char sen[100];
    scanf("%c",&ch);
    scanf("%s\n",s);//You can take a string as input in C using scanf(“%s”, s). But, it accepts string only until it finds the first space.
    scanf("%[^\n]%*c", sen);//In order to take a line as input, you can use scanf("%[^\n]%*c", s);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
    return 0;
}