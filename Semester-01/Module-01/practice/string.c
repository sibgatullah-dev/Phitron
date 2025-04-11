#include<stdio.h>
int main(){
     char stri[20];// Declares a string with a maximum size of 20 characters
     char *str = "Hellow, World"; // Points to a string literal (read-only)
     char *country = "Bangladesh";
     char name[]= "Sibgatullah";// Automatically adds the null character at the end (\0)->Null character used as end token like return 0
     char list[6]={'H','e','l','l','o','\0'};// Explicitly adding the null character
     printf("%s\n%s\n%s\n%s",str,country,name,list);
    return 0;
}

/* In C, strings are null-terminated, meaning the null character (\0) marks the end of the string.
If the null character is missing, functions like printf will continue reading memory beyond the intended string until they encounter a random null character (\0) elsewhere in memory. This can lead to:
1. Printing garbage values.
2. Crashing the program (segmentation fault).
3. Other unpredictable behavior. */