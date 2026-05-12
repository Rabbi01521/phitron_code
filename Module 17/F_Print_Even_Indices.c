#include <stdio.h>
#include <stdlib.h>

void print_even(int a[], int n, int i)
{
    if (i >= n)
    {
        return;
    }
    print_even(a, n, i + 2);
    printf("%d ", a[i]);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    print_even(a, n, 0);
    return 0;
}
