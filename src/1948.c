// Copyright 2022 Trudieis
#include <stdio.h>

int division(int a, int b);
void print_number(int x);

int main() {
    int a;
    scanf("%d", &a);
    print_number(a);
    return 0;
}

int division(int a, int b) {
    if (a < 0) {
      a *= -1;
    }
    while (a != 0 && b != 0) {
      if (a > b) { 
        a -= b;
      } else {
        b -= a;
      }
    }
    return a + b;
}

void print_number(int x) {
  int div = 2;
  while (x != 1) {
    while (division(x, div) == 0) {
      printf("divisor %d", div);
      x = division(x, div);
    }
    div += 1;
  }
  printf("\n");
}
