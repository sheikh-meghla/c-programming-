#include <stdio.h>

int main() {
    char op;
    float a, b;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if(op == '+')
        printf("Result = %.2f\n", a + b);
    else if(op == '-')
        printf("Result = %.2f\n", a - b);
    else if(op == '*')
        printf("Result = %.2f\n", a * b);
    else if(op == '/')
        printf("Result = %.2f\n", a / b);
    else
        printf("Invalid operator\n");

    return 0;
}