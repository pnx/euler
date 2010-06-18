
/*
 * http://projecteuler.net
 * 
 * Projecteuler - Problem 2
 * -----------------------
 * 2008-03-11 Henrik Hautakoski
 */

#include <stdio.h>

int main() {
	
	int c = 0, a = 1, b = 1, r = 0;
		
	while(c < 4000000) {
		
		c = a + b;
		a = b;
		b = c;
			
		if (c & 1)
			r += c;
	}
		
	printf("%i\n", r);

	return 0;
}
