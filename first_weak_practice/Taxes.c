#include<stdio.h>

int main(){

    float taxes = 0;
    float n;

    scanf("%f",&n);

        if (n <= 2000.00)

        {
            printf("Isento\n");
        }
        else if (n <= 3000.00)
        {
            taxes = (n - 2000.00) * 0.08;
            printf("R$ %.2f\n", taxes);
        }
        else if (n <= 4500.00)
        {
            taxes = (1000.00 * 0.08) + (n - 3000.00) * 0.18;
            printf("R$ %.2f\n", taxes);
        }
        else
        {
            taxes = (1000.00 * 0.08) + (1500.00 * 0.18) + (n - 4500.00) * 0.28;
            printf("R$ %.2f\n", taxes);
        }

    return 0;
}