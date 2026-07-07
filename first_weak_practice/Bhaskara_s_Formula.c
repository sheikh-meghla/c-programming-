#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    double ans = (B * B) - (4 * A * C);

    if (A == 0 || ans < 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        double R1 = (-B + sqrt(ans)) / (2 * A);
        double R2 = (-B - sqrt(ans)) / (2 * A);

        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }

    return 0;
}