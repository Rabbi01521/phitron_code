#include <stdio.h>
#include <stdlib.h>

char small_to_capital(char s)
{
    char capital;
    if (s >= 'a' && s <= 'z')
    {
        capital = s - 32;
        return capital;
    }
}

int main()
{
    char s;
    scanf("%c", &s);

    char capital = small_to_capital(s);

    if (capital >= 'A' && capital <= 'Z')
        printf("%c", capital);
    else
        printf("Wrong input");

    return 0;
}