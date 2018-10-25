
/*
 * http://projecteuler.net
 *
 * Projecteuler - Problem 12
 * ------------------------
 * 2010-06-18 Henrik Hautakoski
 */

#include "lib/prime.h"
#include <stdio.h>

int ndiv(int n) {

	int i, exp, ndiv = 1;

	for(i=2; i <= n; i++) {

		if (!is_prime(i))
			continue;

		for(exp = 0; n % i == 0; n /= i, exp++);

		if (exp > 0)
			ndiv *= exp+1;
	}

	return ndiv;
}

int main() {

	int i, num = 1;

	for(i=2; ndiv(num) <= 500; num += i++);

	printf("%i\n", num);

	return 0;
}
