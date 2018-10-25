
/*
 * http://projecteuler.net
 *
 * Projecteuler - Problem 16
 * ------------------------
 * 2010-04-18 Henrik Hautakoski
 *
 * quick and dirty! but somehow still beautiful
 */

#include <stdio.h>

void base2pow(char *num, int len, int exp) {

	int i, j;
	char tmp, rem = 0;

	num[len-1] = 1;
	for(i=0; i < len-1; i++)
		num[i] = 0;

	for(i=0; i < exp; i++) {
		for(j=len-1; j > 0; j--) {

			tmp = num[j] * 2;

			if (rem)
				tmp += 1;
			if ((rem = tmp > 9))
				num[j] = tmp % 10;
			else
				num[j] = tmp;
		}
	}
}

int main() {

	int i, sum = 0;
	char num[512];

	base2pow(num, 512, 1000);

	for(i=0; i < 512; i++)
		sum += num[i];
	printf("%i\n", sum);

	return 0;
}
