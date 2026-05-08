#include <stdio.h>
#include <stdlib.h>

void print(int *n)
{
    int num = 1;
    int space = 1;
    for (int i = 1; i <= *n; i++)
    {
        printf("%d", num);
        num++;
        if (i == *n)
        {
            break;
        }
        else
        {
            printf(" ");
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    print(&n);
    return 0;
}