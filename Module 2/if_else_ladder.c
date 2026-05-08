#include <stdio.h>

int main()
{
    int taka;
    scanf("%d", &taka);

    if (taka >= 100)
    {
        printf("Pizza khabo. \n");
    }
    else if (taka >= 50)
    {
        printf("Fuchka khabo. \n");
    }
    else if (taka >= 20)
    {
        printf("Chips khaboooo. \n");
    }
    else
    {
        printf("Kichui khabooooo naaaaaaa!!! \n");
    }

    return 0;
}
