#include <stdio.h>

int main() {
    int n;
    int i;
    long long fact = 1;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial = %lld\n", fact);

    return 0;
}