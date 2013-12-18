#include<stdio.h>
#include<stdlib.h>

int factors(int n)
{
    int num = 0; // number of factors
    int i;
    
    for (i=1; i<=n; i++) {
        if (n%i == 0)
            num++;
    }

    return num; // return number of factors
}

int triangularNumber(int n)
{
    int i;
    int sum = 0;

    for (i=1; i<=n; i++) {
        sum += i;
    }
    return sum;
}

int main()
{
    int i;
    int numFactors;

    for (i=1 ;; i++) {
        numFactors = factors(triangularNumber(i));
        if (numFactors > 200) {
            printf("triangular number %d\nnumber of factors: %d\n\n", i, numFactors);
        }
        if (numFactors > 500) {
            printf("\n\ntriangular number %d: %d\nnumber of factors: %d\n\n", i, triangularNumber(i), numFactors);
            break;
        }
    }

    return 0;
}
