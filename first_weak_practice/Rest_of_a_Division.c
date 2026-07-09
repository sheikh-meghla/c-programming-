#include <stdio.h>

int main() {

    int x, y, sum = 0;
    scanf("%d %d", &x, &y);

    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }

    for (int i = x; i < y; i++) {
        if (i % 5 == 2 || i % 5 == 3) {
          printf("%d\n", i);  
        }
        
    }

    

    return 0;
}