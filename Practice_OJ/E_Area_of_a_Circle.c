#include <stdio.h>
#include <stdlib.h>

int main()
{
    double pi = 3.141592653;
    double r;
    scanf("%lf", &r);
    double area = pi * (r * r);
    printf("%.9lf", area);
    return 0;
}