#include <stdio.h>
#include <stdlib.h>

void print_it(int n, int i)
{
    if (i == n + 1)
    {
        return;
    }

    printf("%d\n", i);
    print_it(n, i + 1);
}

int main()
{
    int n, i = 1;

    scanf("%d", &n);
    print_it(n, i);
    return 0;
}