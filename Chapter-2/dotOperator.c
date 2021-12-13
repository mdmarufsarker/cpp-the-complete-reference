#include<stdio.h>

struct employee
{
    char name[80];
    int age;
    float wage;
} emp;

int main(void)
{
    emp.wage = 123.23;

    printf("%f\n", emp.wage); // 123.230003

    return 0;
}