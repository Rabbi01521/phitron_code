#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s;
    int n;
    scanf("%c", &s);
    scanf("%d", &n);
    char a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        int len = a[i];

        for (int j = 0; j < len; j++)
        {
            printf("%c", s);
        }
        printf("\n");
    }

    return 0;
}