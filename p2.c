
/*
 * http://projecteuler.net
 * 
 * Projecteuler - Problem 2
 * -----------------------
 * 2008-03-11 Henrik Hautakoski
 */

#include <stdio.h>

int main() {

    int a = 1, b = 1, r = 0;

    for(;;) {

        int c = a + b;
        a = b;
        b = c;

        if (~c & 1)
            r += c;
        if (c >= 4000000)
            break;
    }

    printf("%i\n", r);

    return 0;
}
