#include <stdio.h>
#include <stdlib.h>

// char char_to_ascii(char s)
// {
//     printf("%d", s);
// }

char char_to_ascii(char s)
{
    int con = s;
    return con;
}



int main()
{
    char s;
    scanf("%c", &s);
    int con = char_to_ascii(s);
    printf("%d", con);

    return 0;
}