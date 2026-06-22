#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n;
    scanf("%d", &n);

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        long long val;
        scanf("%lld", &val);
        sum += val;
    }

    if (sum < 0) {
        sum = -sum;
    }

    printf("%lld\n", sum);

    return 0;
}