#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
    printf("please enter a number: ");
    scanf("%d %f %c", &a, &b, &c); // & --> address of operator --> it gives the address of the variable a
    printf("%d %.2f %c", a, b, c);

    return 0;
}