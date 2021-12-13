// print i and i / 2 with fractions

#include<stdio.h>

int main(void)
{
    int i;

    for(i = 1; i <= 10; ++i)
    {
        printf("%d / 2 is: %f\n", i, (float) i / 2);
    }

    return 0;
}
// 1 / 2 is: 0.500000
// 2 / 2 is: 1.000000
// 3 / 2 is: 1.500000
// 4 / 2 is: 2.000000
// 5 / 2 is: 2.500000
// 6 / 2 is: 3.000000
// 7 / 2 is: 3.500000
// 8 / 2 is: 4.000000
// 9 / 2 is: 4.500000
// 10 / 2 is: 5.000000