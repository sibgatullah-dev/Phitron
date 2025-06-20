#include <stdio.h>
int main() {
    char s[10001];
    scanf("%s",&s);
    int len = strlen(s);
    for(char l = 'a'; l<='z';l++){
        int val = 0;
        for (int i = 0; i < len; i++)
        {
            if (s[i]==l)
            {
                val++;// first it takses a character and runns throw the string to look how many times the character appeared after looking for that character in the entire string it changes the character to next character and starts looking throw the string again 
            }
            
        }
        
        if (val>0)
        {
            printf("%c - %d\n",l,val);
        }
    }
    

    return 0;
}