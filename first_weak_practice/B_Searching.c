#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long a[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    long long X;
    scanf("%lld", &X);

    int pos = -1;

    for(int i = 0; i < n; i++) {
        if(a[i] == X) {
            pos = i;
            break;
        }
    }

    printf("%d\n", pos);

    return 0;
}