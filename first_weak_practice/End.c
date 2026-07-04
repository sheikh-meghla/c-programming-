#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long a[n];

    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    int i = 0;
    int j = n - 1;

    while (i <= j) {
        if (i == j) {
            printf("%lld ", a[i]);
        } else {
            printf("%lld %lld ", a[i], a[j]);
        }

        i++;
        j--;
    }

    return 0;
}