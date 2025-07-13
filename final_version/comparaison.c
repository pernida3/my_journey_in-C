#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //prompting the user for the first integer

    int x = get_int("what's x? ");

   // prompt the user for the second integer
    int y = get_int("what's y? ");

    //compare x and y nd print the appropirate message

    if(x<y)
    {
        printf("x is less than y\n");
    }

    if (x > y)
    {
        printf("x is greater than y\n");
    }

    if (x == y)
    {
        printf("x is equal to y\n");
    }
}
