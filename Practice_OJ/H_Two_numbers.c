#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);

    double div = a / b;

    printf("floor %.0lf / %.0lf = %.0lf\n", a, b, floor(div));
    printf("ceil %.0lf / %.0lf = %.0lf\n", a, b, ceil(div));
    printf("round %.0lf / %.0lf = %.0lf\n", a, b, round(div));
    return 0;
}