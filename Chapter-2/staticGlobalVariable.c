// this must all be in one file - prefereably by itself

#include<stdio.h>

static int series_num = 0;
void series_start(int seed);
int series(void);

int series(void)
{
    series_num = series_num + 23;
    return series_num;
}

// initialize series_num
void series_start(int seed)
{
    series_num = seed;
}

int main(void){


    return 0;
}