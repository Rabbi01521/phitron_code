#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // function --
    // - Build-in function
    // strcmp(), ceil(), floor(),
    // ceil() -> 4.2 -> 5
    // floor() -> 4.2 -> 4
    int ans = ceil(4.3);
    printf("%d\n", ans);
    int ans2 = floor(3.9);
    printf("%d\n", ans2);
    int ans3 = round(3.5);
    printf("%d\n", ans3);
    double ans4 = sqrt(20);
    printf("%lf\n", ans4);

    int ans5 = pow(3, 2); //(number, power)
    printf("%d\n", ans5);
    
    int ans6 = abs(-10);
    printf("%d\n", ans6);


    // - user defined function
    return 0;
}