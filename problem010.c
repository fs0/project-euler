#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int isPrime(long x)
{
    long i;
    if ( x == 0 || x == 1 ) return 0; // true
    for (i = 2; i <= sqrtl(x); i++) {
        if (x%i == 0) return 0; // false
    }
    return 1; // true
}


int main()
{
    int i;
    int primes[2000000];
    int j = 0;
    long sum = 0;

    for (i = 0; i<2000000; i++) {
        if ( isPrime(i) == 1 ) {
            primes[j++] = i;
        }
    }

    for (i = 0; i<2000000; i++) {
        if (primes[i] >= 2000000) break;
        sum += primes[i];
    }

    printf("%li\n", sum);

    return 0;
}

