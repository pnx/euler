
/*
 * http://projecteuler.net
 *
 * Projecteuler - Problem 5
 * ------------------------
 * 2008-03-11 Henrik Hautakoski
 */

#include <stdio.h>

int main() {

	int i, n = 20;
	char r;

	do {
		r = 0;
		for(i=20; i > 10; i--) {
			if ((n % i) != 0) {
				n += 20;
				r = 1;
				break;
			}
		}
	} while(r);

	printf("%i\n", n);

	return 0;
}
