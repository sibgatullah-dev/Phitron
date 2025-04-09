//Do-while loop first enters the loop and then check if the argument is true , thats why it will run for once even if the argument is false 

#include <stdio.h>
int main(){
    int i = 1;//Initilization
    do 
    {
        printf("%d\n",i);//code
        i++;//increment/decrement
    }while(i<=10);//end condition
    
    return 0;
}