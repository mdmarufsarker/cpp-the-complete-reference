#include<stdio.h>

int main(void)
{
    int x, y;
    x = 5;
    y = 2;

    printf("%d", x / y); // will display 2
    printf("%d", x % y); // will display 1, the remainder of the integer division

    x = 1;
    y = 2;

    printf("%d %d", x / y, x % y); // will display 0 1

    return 0;
}