#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for (int num = 1; num <= N; num++) {
        if (num % 3 == 0 && num % 7 == 0) {
            printf("%d\n", num);
        }
    }
    return 0;
}