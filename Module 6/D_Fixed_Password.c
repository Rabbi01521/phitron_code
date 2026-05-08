#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pass;

    while (scanf("%d", &pass)) // EOF
    // while (scanf("%d", &pass) != EOF) //EOF
    // for( ; scanf("%d", &pass) ; )
    {
        if (pass == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}