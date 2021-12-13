// write 6 integers to a disk file

#include<stdio.h>

void put_rec(int rec[6], FILE *fp)
{
    int len;

    len = fwrite(rec, sizeof(int) * 6, 1, fp);
    if(len != 1) printf("Write Error");
}

int main(void)
{
    return 0;
}