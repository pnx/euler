
/*
 * http://projecteuler.net
 * 
 * Projecteuler - Problem 3
 * ------------------------
 * 10/01/10 (binary day :D) Henrik Hautakoski
 * 
 * fast solution using euclidean algorithm for calculating gcd.
 */

#include <stdio.h>

typedef unsigned long bint;

bint gcd(bint a, bint b) {
	
	bint c;
	
	while(b != 0) {
		c = b;
		b = a % b;
		a = c;
	}
	
	return a;
}

int main() {
	
	bint i, r = 0, n = 600851475143;
	
	for(i=2; i <= n; i++) {
		
		if((r = gcd(n, i)) == 1)
			continue;
		
		n /= r;
	}
	
	printf("%li\n", r);
	
	return 0;
}
