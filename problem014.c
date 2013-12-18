#include<stdio.h>
#include<stdlib.h>

int collatzLength(int n)
{
    int length = 1; // length of chain, starting with n
    unsigned long var = n;
    
    while (var > 1) {
        if (var%2 == 0) { // even
            var = var/2;
        } else { // odd
            var = 3*var+1;
        }
        length++;
    }

    return length;
}

int main()
{
    int i;
    int tmp;
    int longestChain = 0;
    int start;

    for (i=1000000; i>0; i--) {
        tmp = collatzLength(i);
        if (longestChain < tmp) {
            printf("%d\n", tmp);
            longestChain = tmp;
            start = i;
        }
    }

    printf("longest chain: %d\n", longestChain);
    printf("starting number: %d\n", start);

    return 0;
}
