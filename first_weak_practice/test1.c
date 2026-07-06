#include<stdio.h>

int main() {

    int x = 5, y = 10;

    // y = x;

    int *p;
    p = &x;

    y = *p;

    y++;

    printf("%d",y);
    return 0;
}