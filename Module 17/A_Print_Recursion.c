#include <stdio.h>
#include <stdlib.h>

void recursion_n(int n, int i)
{
    if (n == i)
    {
        return;
    }

    printf("I love Recursion\n");
    recursion_n(n, i + 1);
}

int main()
{
    int n, i = 0;
    scanf("%d", &n);
    recursion_n(n, i);
    return 0;
}