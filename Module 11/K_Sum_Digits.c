#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    char s[n];

    scanf("%s", &s);
    // printf("%s", s);

    int sum = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        int num = s[i] - '0';
        sum += num;
        // printf("%c\n", s[i]);
    }

    printf("%d\n", sum);

    return 0;
}