#include <stdio.h>
#include <stdlib.h>

int my_abs(int n){

    if(n < 0){
        return n*(-1);
    }else{
        return n;
    }

}

int main() {
    int n;
    scanf("%d", &n);
    int val = my_abs(n);
    printf("%d", val);
    return 0;
}