#include <stdio.h>
#include <stdlib.h>

double myPow(double x, int n);

int main(void) {

    printf("%lf\n", myPow(2, 2));
    printf("%lf\n", myPow(2, -2));

    return 0;
}

double myPow(double x, int n) {

    double positiveCase(double x, int n);
    double negativeCase(double x, int n);

    // base case
    if (n == 0) {
        return 1.0;
    }
    // positive case
    else if (n > 0) {
        return positiveCase(x, n);
    }

    // negative case
    else {
        return negativeCase(x, abs(n));
    }

    return 0.0;
}

double positiveCase(double x, int n) {
    // base case
    if (n == 1) {
        return x;
    }
    // recursive case
    else {
        return x * positiveCase(x, n - 1);
    }
}

double negativeCase(double x, int n) {
    return 1.0 / positiveCase(x, n);
}