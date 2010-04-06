
/*
 * http://projecteuler.net
 * 
 * Projecteuler - Problem 4
 * ------------------------
 * 2009-12-28 Henrik Hautakoski
 * 
 * A somewhat elegant solution (representing the numbers as a string is not so fancy)
 */

#include <stdio.h>

int factor(int val) {
	
	int a;
	
	for(a=999; a > 99; a--) {
		
		if((val % a) == 0 && (val/a) < 999)
			return a;
	}
	
	return 0;
}

int ispalindrom(int num) {
	
	int i, n;
	char buffer[7];
	
	sprintf(buffer, "%i", num);
	for(n=0; buffer[n+1] != 0; n++);
	
	for(i=0; i < n-i; i++) {
		
		if (buffer[i] != buffer[n-i])
			return 0;
	}
	
	return 1;
}

int main() {
	
	int r, a;
	
	for(r=999999; r >= 100001; r--) {
		
		if (!ispalindrom(r) || !(a = factor(r)))
			continue;
		
		printf("%i * %i = %i\n", r/a, a, r);
		break;
	}
	
	return 0;
}
