#include <stdio.h>

int main() {
    int temperature = 15;
    int isRaining = 1;

    // Multiple conditions with OR (||)
    if (temperature < 20 || isRaining) {
        printf("Stay indoors.\n");
    } else {
        printf("You can go outside.\n");
    }

    return 0;
}