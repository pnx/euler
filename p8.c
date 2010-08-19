
/*
 * http://projecteuler.net
 * 
 * Projecteuler - Problem 8
 * ------------------------
 * 2009-12-28 Henrik Hautakoski
 * 
 * No comment!
 */

#include <malloc.h>
#include "lib/io.h"

#define N_CHARS 1000

#define DATA "./data/8"

int product(char *ptr, int n) {
	
	int i, r = 1;
	
	for(i=0; i < n; i++)
		r *= ((int)ptr[i]) - 0x30;
	
	return r;
}

int main() {
	
	int i;
	char *str = malloc(N_CHARS);
    FILE *fd = fopen(DATA, "r");
	int tmp, r = 0;

    if (str == NULL) {
        fprintf(stderr, "memory error\n");
        return 1;
    }

    if (fd == NULL) {
        fprintf(stderr, "can't open file '%s'\n", DATA);
        return 1;
    }
    
    readnum(fd, str, N_CHARS);

	for(i=0; i < N_CHARS-5; i++) {

		tmp = product(&str[i], 5);
	
		if (tmp > r)
			r = tmp;
	}
	
	printf("%i\n", r);
	
	return 0;
}
