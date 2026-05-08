#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; // this is an array that has 5 value each value take 4bytes size, like if arr[0] Memory address size 530 then arr[1] size must be start from 534 and vice-versa

    // printf("%d %d ", &arr[0], &arr[1]);
    // printf("%d %d ", &arr[2], &arr[3]);
    printf("%d\n", arr[5]);

    int arra[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arra[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arra[i]);
    }

    return 0;
}