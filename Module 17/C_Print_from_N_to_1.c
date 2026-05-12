#include <stdio.h>
#include <stdlib.h>

void print_it(int n, int i)
{
    if (i < 2)
    {
        printf("%d", i);
        return;
    }

    printf("%d ", i);
    print_it(n, i - 1);
}

int main()
{
    int n, i;

    scanf("%d", &n);
    print_it(n, i = n);
    return 0;
}