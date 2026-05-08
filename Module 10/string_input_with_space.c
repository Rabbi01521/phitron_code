#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[50];
    // scanf("%s", &s);
    // gets(s);
    // printf("%s\n", s);
    // fgets(s, size, stdin) // size jeta bola hobe null soho oita print hobe.
    // fgets(s, 12, stdin); //RABBI HASAN
    // fgets(s, 8, stdin); // RABBI H --> here array size is 8(0-7) -- > so the last position is fixed for null('\0')
    fgets(s, 20, stdin); // enter soho print hobe but enter er por ar print kore na
    // space thakle use korte hobe fgets() but eita eneter soho print kore but enter er por ar print kore na... 
    // space jodi na thake tahole scanf() use kora best.
    printf("%s", s);
    return 0;
}