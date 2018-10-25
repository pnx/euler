
/*
 * http://projecteuler.net
 *
 * Projecteuler - Problem 7
 * ------------------------
 * 2009-12-28 Henrik Hautakoski
 */

#include <stdio.h>
#include "lib/prime.h"

int main() {

	uint32_t i, p, n = 1;

	for(i=3; n < 10001; i+=2) {

		if (!is_prime(i))
			continue;

		p = i;
		n++;
	}

	printf("%i\n", p);

	return 0;
}
