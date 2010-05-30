
/*
 * http://projecteuler.net
 * 
 * Projecteuler - Problem 14
 * ------------------------
 * 2010-05-30 Henrik Hautakoski
 *
 * Fun problem. crazy code.
 */
 
#include <stdio.h>

int main() {

    /* working variables */
    int i, nlen, table[1000000] = {0, 1};
    long long n;
    /* result */
    int len, rs = 0;
    
    for(i=2; i < 1000000; i++) {
    
        n = i;
        nlen = 1;
        
        for(;;) {
            if (n & 1) {
                n += (n<<1) + 1;
            } else {
                n >>= 1;
                if (n < i) {
                    nlen += table[n];
                    break;
                }
            }
            nlen++;
        }
        
        table[i] = nlen;
        
        if (nlen > len) {
            len = nlen;
            rs = i;
        }
    }

    printf("%i\n", rs);

    return 0;
}
