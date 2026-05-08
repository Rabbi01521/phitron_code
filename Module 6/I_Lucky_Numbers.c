#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    scanf("%d", &x);
    int first = x / 10;
    int second = x % 10;

    if (second == 0)
    {
        int temp = first;
        first = second;
        second = temp;
    }

    // printf("%d %d", first, second);

    if (first % second == 0 || second % first == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    // printf("%d %d", first, second);
    return 0;
}