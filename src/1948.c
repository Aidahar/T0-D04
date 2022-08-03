// Copyright [year] <Copyright Owner>
#include <stdio.h>

int division(int a, int b);

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", division(a, b));
    return 0;
}

int division(int a, int b) {
    int result = 0;
    while (a >= b) {
        a -= b;
        result++;
    }
    return result;
}