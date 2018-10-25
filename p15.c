
/*
 * http://projecteuler.net
 *
 * Projecteuler - Problem 15
 * ------------------------
 * 2010-06-12 Henrik Hautakoski
 *
 * Hard one, there is no clear connection between the grid's lines and pascal's triangle.
 * but it sure is elegant.
 */

#include <stdio.h>

int main() {

	int c;
	double r = 20*2 + 1, v = 1;

	for(c=1; c <= 20; c++)
		v *= (r - c) / c;
	printf("%.0f\n", v);

	return 0;
}
