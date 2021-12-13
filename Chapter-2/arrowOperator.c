#include<stdio.h>

struct employee
{
    char name[80];
    int age;
    float wage;
} emp;

struct employee *p = &emp; // address of emp into p

int main(void)
{
    p->wage = 123.23;

    printf("%f\n", p->wage); // 123.230003

    return 0;
}