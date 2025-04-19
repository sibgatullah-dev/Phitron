#include<stdio.h>

int main() {
    int N ,count;
    scanf("%d", &N);
    count = 0;
    for (int num = 1; num <= N; num++) {
        if (num % 3 == 0 && num % 7 == 0) {
            printf("%d\n", num);
            count++;
        }
    }
    printf("Total values are %d",count);

    return 0;
}