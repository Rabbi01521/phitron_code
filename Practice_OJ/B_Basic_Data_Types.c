#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    long long b;
    char ch;
    float fl;
    double db;

    scanf("%d %lld %c %f %lf", &a, &b, &ch, &fl, &db);
    printf("%d\n%lld\n%c\n%.2f\n%.1lf", a, b, ch, fl, db);

    return 0;
}