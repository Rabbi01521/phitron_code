#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Ascii
    // a-z => 97 - 122
    // A-Z => 65 - 90
    char ch;
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("%c", ch);
    }
    else
    {
        ch = ch + 32;
        printf("%c", ch);
    }
    return 0;
}