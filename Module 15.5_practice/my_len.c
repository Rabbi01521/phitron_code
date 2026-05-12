#include <stdio.h>
#include <stdlib.h>

int my_len(char s[])
{
    int count = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        // printf("%c\n", s[i]);
        count++;
    }

    return count;
}

int main()
{
    char s[100];
    scanf("%s", &s);
    int total = my_len(s);
    printf("%d", total);
    return 0;
}