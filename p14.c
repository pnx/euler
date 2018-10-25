
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
#include <stdint.h>

#define MAX 1000000

int main() {

	/* working variables */
	int i, nlen, table[MAX] = {0, 1};
	int64_t n;
	/* result */
	int len = 0, rs = 0;

	for(i=2; i < MAX; i++) {

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

		if (nlen > len) {
			len = nlen;
			rs = i;
		}

		table[i] = nlen;
	}

	printf("%i\n", rs);

	return 0;
}
