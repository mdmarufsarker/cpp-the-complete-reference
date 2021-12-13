#include <stdio.h>

int main(void)
{
    extern int first, last; // use global vars

    printf("%d %d", first, last);

    return 0;
}

// global definition of first and last
int first = 10, last = 20;