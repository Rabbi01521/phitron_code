#include <stdio.h>
#include <stdlib.h>

void summation(int *a, int *b)
{
    int total = *a + *b;
    printf("%d\n", total);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    summation(&a, &b);
    return 0;
}