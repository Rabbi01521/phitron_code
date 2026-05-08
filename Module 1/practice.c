// 3. Write a C program that will take 2 numbers from the user and then print the 2nd number first and then first number.

#include <stdio.h>
int main()
{
    int a, b;
    printf("Please enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("%d %d", b, a);
    return 0;
}