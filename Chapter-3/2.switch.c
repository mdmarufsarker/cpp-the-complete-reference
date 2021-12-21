// Process a value
#include<stdio.h>

int error(int x);
int process(int i);

void inp_handler(int i)
{
    int flag;

    flag = -1;

    switch (i)
    {
        case 1: // These cases have common
        case 2: // Statement Sequence
        case 3:
            flag = 0;
            break;
        case 4:
            flag = 1;
        case 5:
            error(flag);
            break;
        default:
            process(i);
    }
}

int main(void)
{
    inp_handler(5);
    return 0;
}

int error(int x)
{
    printf("Error\n");
}
int process(int i){
    return i;
}