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
    int size = 10001;
    long x[size];
    long i = 0;
    long j = 0;

    while(1 == 1) {
        if ( isPrime(i) == 1 ) {
            x[j] = i;
            if ( j == size-1 ) break;
            j++;
        }
        i++;
    }

    printf("%li\n", x[j]);

    return 0;
}

