#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        printf("%d ", a[left]);

        if (left != right)
        {
            printf("%d ", a[right]);
        }

        left++;
        right--;
    }

    return 0;
}