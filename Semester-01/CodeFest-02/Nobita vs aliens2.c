#include <stdio.h>
int n, k, a[1001];
void swap(int* x, int* y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
void sort_array() {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
                swap(&a[i], &a[j]);
}
void print_max_shot() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort_array();
    int cnt = 0, i = 0, j = n - 1;
    while (i < j) {
        if (a[i] + a[j] <= k) {
            cnt++;
            i++;
            j--;
        } else {
            j--;
        }
    }
    printf("%d\n", cnt);
}

int main() {
    print_max_shot();
    return 0;
}
