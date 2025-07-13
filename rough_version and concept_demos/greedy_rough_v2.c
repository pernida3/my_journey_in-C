#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //this variable stores the amount of change owed
    int cents;

    // Prompt the user for a valid amount of change
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents <= 0);

    int count = 0;

    // Use greedy approach to subtract the largest coin values first
    while (cents > 0)
    {
        if (cents >= 25)
        {
            cents -= 25;
        }
        else if (cents >= 10)
        {
            cents -= 10;
        }
        else if (cents >= 5)
        {
            cents -= 5;
        }
        else
        {
            cents -= 1;
        }

        // Increase coin count each time a coin is used
        //this is what i came up with only slight modification
        count++;
    }
    //this print the total of coins used
    printf("%i\n", count);
}
