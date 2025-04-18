//You will be given an integer N. If N is a positive number then print from 1 to N, otherwise print from N to 0.

#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);

    if (N > 0) {
        for (int i = 1; i <= N; i++) {
            if (i > 1){
                printf(" ");
            }
            printf("%d", i);
        }
    } 
    else{
        for (int i = N; i <= 0; i++) {
            if (i > N){
                printf(" ");
            }
            printf("%d", i);
        }
    }
    
    return 0;
}