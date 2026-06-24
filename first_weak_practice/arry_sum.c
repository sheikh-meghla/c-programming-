#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};

    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d\n", a[x] + a[y]);

    return 0;
}