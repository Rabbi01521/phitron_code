#include <stdio.h>
#include <stdlib.h>

void print_array(int a[], int n, int i)
{
    if (i == n)
    {
        return;
    }
    printf("%d ", a[i]); // print: 10 20 30 40 50
    print_array(a, n, i + 1);
    // printf("%d ", a[i]); // print: 50 40 30 20 10
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

    print_array(a, n, 0);
    return 0;
}