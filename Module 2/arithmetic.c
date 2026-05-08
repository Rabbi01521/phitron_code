#include <stdio.h>

int main()
{
    int a = 5;
    int b = 4;
    int sum = a + b;
    printf("Sum: %d\n", sum);
    int sub = a - b;
    printf("Subtraction: %d\n", sub);
    int mul = a * b;
    printf("Multiplication: %d\n", mul);

    float c = 15;

    double db = 15 / 4;
    printf("%lf\n", db);
    float div = c / b;
    printf("Division: %.1f\n", div);
    return 0;
}
