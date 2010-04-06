
/*
 * http://projecteuler.net
 * 
 * Projecteuler - Problem 1
 * ------------------------
 * 2008-01-21 Henrik Hautakoski
 */

#include <stdio.h>

#define mod(x) ((x % 5) == 0 || (x % 3) == 0)

int main() {
	
	int i, r = 0;
	
	for(i=3; i < 1000; i++)
		if (mod(i)) r += i;
	
	printf("%i\n", r);
	
	return 0;
}
