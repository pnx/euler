
/* 
 * http://projecteuler.net
 * 
 * Projecteuler - Problem 6
 * ------------------------
 * 2008-03-13 Henrik Hautakoski
 */

#include <stdio.h>

int main() {
    
    int i, s1 = 1, s2 = 1;
    
    for(i=2; i <= 100; i++) {
        s1 += i*i;
        s2 += i;
    }
    
    printf("%i\n", s2*s2 - s1);
}
