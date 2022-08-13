// Copyright 2022 Trudieis
#include <stdio.h>

int division(int a, int b);
int ost(int a, int b);
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
    int res = 0, ost = a;
    while (ost >= b) {
      res++;
      ost -= b;
    }
    if (ost == 1) {
      res = ost;
    } 
    return res;
}

int ost(int a, int b) {
    if (a < 0) {
      a *= -1;
    }
    int res = 0, ost = a;
    while (ost >= b) {
      res++;
      ost -= b;
    }
    if (ost == 1) {
      res = ost;
    } else if (ost == 0) {
      res = 0;
    }
    return res;
}

void print_number(int x) {
  int div = 2;
  while (x != 1) {
    if (ost(x, div) == 0) {
      x = division(x, div);
    } else  {
      div += 1;
    }
  }
  printf("%d\n", div);
}
