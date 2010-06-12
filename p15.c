
/*
 * http://projecteuler.net
 * 
 * Projecteuler - Problem 15
 * ------------------------
 * 2010-06-12 Henrik Hautakoski
 */

#include <stdio.h>

int main() {

    int c;
    double r = 20*2 + 1, v = 1;

    for(c=1; c <= 20; c++)
        v *= (r - c) / c;
    printf("%.0f\n", v);

    return 0;
}
