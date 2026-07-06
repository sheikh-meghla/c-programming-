#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1, x2, y2;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    double x3 = (x2 - x1) * (x2 - x1);
    double y3 = (y2 - y1) * (y2 - y1);

    double ans = sqrt(x3 + y3);

    printf("%.4lf\n", ans);

    return 0;
}