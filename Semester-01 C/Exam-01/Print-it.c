#include<stdio.h>
int main(){
    printf("Hello, world! I am learning C programming language. ^_^\n");
    //characters like the backslash (\) are escape characters. This means that the sequence is not being treated as a valid string if the backslashes are not properly escaped.That's why we need to escape the \ with \\ sign
    printf("Programming is fun and challenging. /\\/\\/\\\n");
    printf("I want to give my 100%% dedication to learn!\tI will succeed one day.");//The % character is part of format specifiers in printf. To print a literal %, we need to escape it as %%. Also \t giiving a one tabe space
        
    return 0;
}