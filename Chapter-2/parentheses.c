#include<stdio.h>

char s[80];

int main(void)
{
    s[3] = 'x';
    printf("%c", s[3]); // x

    return 0;
}