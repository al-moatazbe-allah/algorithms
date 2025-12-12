#include <stddef.h>

void prime(unsigned m, size_t *z, unsigned primes[]) {
    *z = 0; 

    for (unsigned i = 2; i <= m; i++) {
        int is_prime = 1; 

        for (unsigned j = 2; j * j <= i; j++) {  
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            primes[*z] = i;
            (*z)++;
        }
    }
}
