#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int is_palindrome(char s[]){
    for (int i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
           return 0;
        }
    }
    
    return 1;
}


int main() {    
    char s[1001];
    scanf("%s", s);
    int palindrom_or_not =is_palindrome(s);
    printf(palindrom_or_not ? "Palindrome" : "Not Palindrome");
    
    return 0;
}