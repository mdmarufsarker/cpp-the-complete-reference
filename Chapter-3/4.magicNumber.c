// Magic Number Program

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int magic; // magic number
    int guess; // user's guess

    magic = rand(); // Generate the magic number

    printf("Guess the magic number: ");
    scanf("%d", &guess);

    if(guess == magic)
    {
        printf("** Right **");
        printf(" %d is the magic number.\n",magic);
    }
    else if(guess > magic)
    {
        printf("** Wrong, Too High**");
    }
    else printf("Too Low\n");
    
    return 0;
}