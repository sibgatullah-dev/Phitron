#include <stdio.h>

int main() {
    int tc;
    scanf("%d", &tc);
    
    while (tc--) {
        long long int m, a, b, c;

        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        
        long long multi = a * b * c;

        int missing = -1;

       if (multi == 0) {
            if (m == 0) {
                missing = 0;
            } 
            else {
                missing = -1;
            }
        }
        else
        {
            if (m % multi == 0) {
                missing = m / multi;
            } else {
                missing = -1;
            }
        }
        
        printf("%d\n", missing);
    }
    
    return 0;
}