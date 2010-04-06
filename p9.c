
/*
 * http://projecteuler.net
 * 
 * Projecteuler - Problem 9
 * ------------------------
 * 2010-04-06 Henrik Hautakoski
 * 
 * the math stuff here (simple algebra)
 *
 *         1000 = a + b + c
 *         10^6 = (a + b + c)^2 
 *         10^6 = a^2 + ab + ac + ba + b^2 + bc + ca  + cb + c^2
 *         10^6 = a^2 + b^2 + c^2 + 2(ab + ac + bc)                    
 *         10^6 = 2a^2 + 2b^2 + 2(ab + ac + bc)                    (substitution: a^2 + b^2 = c^2, pythagorean theorem)
 *       10^6/2 = a^2 + b^2 + ab + ac + bc
 *  10^6/2 + ab = a^2 + b^2 + 2ab + ac + bc
 *  10^6/2 + ab = (a + b)(a + b) + (a + b)c
 *  10^6/2 + ab = (a + b + c)(a + b)
 *  10^6/2 + ab = 1000a + 1000b                                    (substitution: a + b + c = 1000)
 *       10^6/2 = 1000a + 1000b - ab
 *       10^6/2 = a(1000 - b) + 1000b
 *
 *  Equation to use: a = (10^6/2 - 1000b)/(1000 - b)
 */

#include <stdio.h>

int main() {

    int a, b;
    double tmp;

    for(b=1; b < 1000; b++) {
        a = tmp = (5e5 - 1000*b)/(1000 - b);
        if (tmp - a >= 0.0 && (tmp - a) < .00000001) {
            printf("%i\n", a*b*(1000 - (a+b)));
            break;
        }
    }

    return 0;
}
