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
    long i;
    long x = 600851475143;
    //long x = 13195;
    long newNumber = x;
    long largestFactor = 0;
    
    for (i = 2; i < x; i++) {
        if (newNumber % i == 0) {
            if (isPrime(i) == 1) {
                newNumber = newNumber/i;
                if (isPrime(newNumber) == 1) {
                    largestFactor = newNumber;
                    break;
                }
                if (largestFactor < i) {
                    largestFactor = i;
                }
            }
        }
    }

    printf("%li\n", largestFactor);

    return 0;
}

