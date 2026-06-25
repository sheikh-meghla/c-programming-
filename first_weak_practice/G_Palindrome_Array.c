#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long a[n];

    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    int palindrome = 1;

    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}