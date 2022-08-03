// Copyright [year] <Copyright Owner>
#include <stdio.h>
#include <math.h>

double diam(double a);
double geperb(double a);
double bern(double a);

int main(void) {
    double pi = 3.14159265358979323846;
    for (double i = -pi; i < pi; i += pi/21) {
        if (diam(i) == NAN) {
            printf("%.7lf | - | %.7lf\n", bern(i), geperb(i));
        } else if ( bern(i) == NAN) {
            printf("%.7lf | - | %.7lf\n", diam(i), geperb(i));
        } else if (geperb(i) == NAN) {
            printf("%.7lf | %.7lf | -\n", diam(i), bern(i));
        } else {
            printf("%.7lf | %.lf | %.7lf\n", diam(i), bern(i), geperb(i));
        }
    }
    return 0;
}

double diam(double a) {
    return 1/(1 + a * a);
}

double bern(double a) {
    return sqrt(sqrt(1+4*a*a)-a*a-1);
}

double geperb(double a) {
    return 1 / (a * a);
}


