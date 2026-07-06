#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        if (a == 0 || b == 0 || c == 0) {
            if (m == 0)
                printf("0\n"); 
            else
                printf("-1\n");
        }
        else {
            long long mult = a * b * c;

            if (m % mult == 0)
                printf("%lld\n", m / mult);
            else
                printf("-1\n");
        }
    }

    return 0;
}