#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    char init = 'a';
    scanf("%c", &x);
    int ch;
    if (x == 'z')
    {
        printf("%c", init);
    }
    else
    {
        ch = x + 1;
        printf("%c", ch);
    }

    return 0;
}