
#include "prime.h"
#include <math.h>

int is_prime(uint32_t p) {

    uint32_t i, l;

    if (p == 2)
        return 1;
    if (p < 2 || (p & 1) == 0)
        return 0;

    l = ((uint32_t)sqrt(p)) + 1;

    for(i=3; i < l; i+=2)
        if (p % i == 0) return 0;

    return 1;
}
