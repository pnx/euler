
/*
 * http://projecteuler.net
 *
 * Projecteuler - Problem 10
 * ------------------------
 * 2010-04-06 Henrik Hautakoski
 */

#include <stdio.h>
#include "lib/prime.h"

int main() {

	uint32_t i;
	uint64_t s = 2;

	for(i=3; i < 2e6; i+=2) {
		if (is_prime(i))
			s += i;
	}
	printf("%li\n", s);

	return 0;
}
