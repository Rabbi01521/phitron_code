#include <stdio.h>
#include <stdlib.h>

// return_type function_name(parameter){

//     return
// }

int sub(int num1, int num2)
{
    printf("%d %d\n", num1, num2);
    int ans = num1 - num2;
    return ans;
}

int sum(int num1, int num2, int num3)
{
    printf("%d %d %d\n", num1, num2, num3);
    int ans = num1 + num2 + num3;
    return ans;
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int ans = sum(a, b, c);
    int val = sum(3, 4, 5);
    int val2 = sum(3, -4, 15);
    int val3 = sub(20, 10);
    int val4 = sub(a, b);
    printf("Sum : %d\n", val);
    printf("Sum : %d\n", ans);
    printf("Sum : %d\n", val2);
    printf("Sub : %d\n", sub(5, 6));
    printf("Sub : %d\n", val4);

    return 0;
}