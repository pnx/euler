
/*
 * http://projecteuler.net
 *
 * Projecteuler - Problem 17
 * ------------------------
 * 2011-02-03 Henrik Hautakoski
 */

#include <stdio.h>

#define N_AND 3
#define N_HUNDRED 7
#define N_THOUSAND 8

int len_ones(int n) {

    switch(n) {
    case 1: case 2: case 6:
        return 3;
    case 4: case 5: case 9:
        return 4;
    case 3: case 7: case 8:
        return 5;
    }
    return 0;
}

int len_tentwenty(int n) {

    switch(n) {
    case 1: case 2:
        return 6;
    case 5: case 6:
        return 7;
    case 3: case 4: case 8: case 9:
        return 8;
    case 7:
        return 9;
    }
    return 0;
}

int len_tens(int n) {

    switch(n) {
    case 1:
        return 3;
    case 4: case 5: case 6:
        return 5;
    case 2: case 3: case 8: case 9:
        return 6;
    case 7:
        return 7;
    }
    return 0;
}

int len(int n) {

    int ret = 0;

    if (n > 99) {
        ret += len_ones(n / 100);
        n = n % 100;
        if (n)
            ret += N_AND;
        ret += N_HUNDRED;
    }

    if (n > 10 && n < 20) {
        ret += len_tentwenty(n % 10);
    } else {
        ret += len_ones(n % 10);
        ret += len_tens(n / 10);
    }
    return ret;
}

int main() {

    int i, n = len_ones(1) + N_THOUSAND;

    for(i=1; i < 1000; i++)
        n += len(i);

    printf("%i\n", n);

    return 0;
}
