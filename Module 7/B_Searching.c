#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    int num;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &num);

    int index = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            index = i;
            break;
        }
    }
    // printf("\n");
    printf("%d ", index);
    // printf("%d", num);

    return 0;
}