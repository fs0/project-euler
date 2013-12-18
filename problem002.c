#include <stdio.h>

int main()
{
    int sum = 0;
    int i;
    int tmp;
    int first = 1;
    int second = 2;
    printf ("%d\n", first);
    printf ("%d\n", second);

    while ( 1 == 1 ) {
        if ( second > 4000000 ) break;
        if ( second % 2 == 0) sum += second;
        tmp = second;
        second = first + second;
        first = tmp;
        printf("%d\n", second);
    }
    printf("sum: %d\n", sum);

    return 0;
}
