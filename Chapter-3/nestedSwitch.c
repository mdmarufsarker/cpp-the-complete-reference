#include<stdio.h>

int process(int x, int y)
{
    return x / y;
}

int main(void)
{
    int x = 10, y = 5;

    switch (x)
    {
        case 1:
            switch(y)
            {
                case 0:
                    printf("Divide by zero error\n");
                    break;
                case 1:
                    process(x, y);
            }
            break;
        case 2:
            printf("This is case 2\n");
        default:
            printf("This is the default case\n");
    }

    return 0;
}