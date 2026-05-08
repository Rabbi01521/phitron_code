#include <stdio.h>
#include <stdlib.h>

char capital_to_small(char s)
{
    char small;
    if (s >= 'A' && s <= 'Z')
    {
        small = s + 32;
        return small;
    }
}

int main()
{
    char s;
    scanf("%c", &s);

    char small = capital_to_small(s);

    if (small >= 'a' && small <= 'z')
        printf("%c", small);
    else
        printf("Wrong input");

    return 0;
}