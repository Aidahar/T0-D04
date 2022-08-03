// Copyright [year] <Copyright Owner>
#include <stdio.h>

int fib(int a);

int main(void) {
    int num, res;
    char c;
    scanf("%d%c", &num, &c);
    if ( c != '\n' || num <= 0) {
        printf("n/a\n");
        return 1;
    }

    for (int i = 1; i <= num; i++) {
        res = fib(i);
    }
    printf("%d", res);
    return 0;
}

int fib(int a) {
    if (a == 1 || a == 2) {
        return 1;
    }
    return fib(a - 1) + fib(a - 2);
}