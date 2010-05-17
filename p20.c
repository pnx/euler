
/*
 * http://projecteuler.net
 * 
 * Projecteuler - Problem 20
 * ------------------------
 * 2010-05-17 Henrik Hautakoski
 *
 * easy with a good lib for doing arbitrary-precision arithmetic
 */

#include <stdio.h>
#include <malloc.h>
#include <gmp.h>

char* fak(int n) {

    mpz_t v;
    mpz_init(v);
    mpz_fac_ui(v, n);
    return mpz_get_str(NULL, 10, v);
}

int sum(char *n) {
    
    int num = 0;
    
    for(; *n != '\0'; n++)
        num += (*n) - 0x30;
        
    return num;
}

int main() {

    char *n = fak(100);

    if (n == NULL)
        return 1;

    printf("%i\n", sum(n));

    free(n);

    return 0;
}
