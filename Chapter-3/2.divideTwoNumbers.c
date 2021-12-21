// Divide the first number by the second number

#include<stdio.h>

int main(void)
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    if(b != 0) printf("%d\n", a / b);

    return 0;
}