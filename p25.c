
/*
 * http://projecteuler.net
 *
 * Projecteuler - Problem 25
 * -----------------------
 * 2010-07-13 Henrik Hautakoski
 *
 * Alot of math, binet's formula
 */

#include <math.h>
#include <stdio.h>

#define LOG10PHI 0.20898764024997876221 /* log10((1+sqrt(5))/2) */
#define MAGIC    0.65051499783199062676 /* |(log10(5) / 2) - 1| */

#define fibolen(n) ((unsigned int) ceil(((n) - MAGIC) / LOG10PHI))

int main() {

	printf("%i\n", fibolen(1000));
	return 0;
}
