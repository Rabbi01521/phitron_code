#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d", &num);

    int y = num / 365;
    int m_d = num % 365;
    int month = m_d / 30;
    int day = m_d % 30;
    printf("%d years\n%d months\n%d days\n", y, month, day);
    return 0;
}