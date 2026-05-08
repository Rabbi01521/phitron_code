#include <stdio.h>
#include <stdlib.h>

void fun(int a[], int n)
{
    a[1] = 200;
    printf("Fun address: %p\n", a);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
    }
    fun(a, n);
    printf("Main address: %p\n", a);
    return 0;
}