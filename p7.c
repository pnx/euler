
/*
 * http://projecteuler.net
 * 
 * Projecteuler - Problem 7
 * ------------------------
 * 2009-12-28 Henrik Hautakoski
 * 
 * fast and elegant solution using The fundamental theorem of arithmetic wich state: 
 * any natural number greater than 1 can be prime factorized in only one unique way 
 * unless it is prime itself.
 */

#include <stdio.h>
#include <malloc.h>

int isprime(int *pl, int l, int p) {
    
    int i;	
	
	for(i=0; i < l; i++) {

		if((p % pl[i]) == 0)
			return 0;
	}
	
	return 1;
}

int main() {
	
    int i, len = 3, *prime = malloc(sizeof(int)*10001);
	
    if (prime == NULL)
        return 1;
    
    prime[0] = 2;
    prime[1] = 3;
    prime[2] = 5;
    
	for(i=6; len < 10001; i++) {
		
		if(!isprime(prime, len, i))
			continue;
		
		prime[len++] = i;
	}

	printf("%i\n", prime[len-1]);
    
    free(prime);
    
	return 0;
}

