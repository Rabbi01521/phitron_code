#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n-1;
    for (int i = 1; i <= n; i++) // line print
    {
        for (int i = 1; i <= space; i++) // print space
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++) // print star
        {
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }
    return 0;
}