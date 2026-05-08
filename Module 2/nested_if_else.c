#include <stdio.h>

int main()
{

    int taka;
    scanf("%d", &taka);
    if (taka >= 5000)
    {
        printf("I will go to Cox's Bazar.\n");
        if (taka >= 10000)
        {
            printf("I will go to Saint Martin's Island.\n");
        }
        else
        {
            printf("Go back to home.\n");
        }
    }
    else
    {
        printf("Not Going anywhere.\n");
    }
    return 0;
}