#include <stdio.h>

int main()
{
    int x = 2520;
    int i;
    long number;
    int br = 0;

    for (number = 10; ; number ++) {
        for (i = 1; i <= 20; i++) {
            if (number % i != 0) {
                br = 0;
                break;
            }
            br = 1;
        }
        if (br == 1) break;
    }
    printf("%li\n", number);

    return 0;
}
