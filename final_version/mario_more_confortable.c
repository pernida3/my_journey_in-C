#include <cs50.h>
#include <stdio.h>

/*This vrsio uses the logic structure i originally developped while learning
loops before moving on to optimize or refactor further*/

void print_row(int height ,int row);

int main(void)
{
    int height;

    //prompt for height

    do
    {
        height = get_int("what is the height? ");
    }
    while (height < 1 || height > 8);


    // Print each row using a function
    for (int row = 0; row < height; row++)
    {
        print_row(height, row);
    }
}



//function to print a single row of the pyramid

void print_row(int height ,int row)
{
    //print left spaces

    for(int col = 1; col <(height - row);col++)
    {
        printf(" ");
    }


    //print the left hashes
    for(int hash = 0; hash <(row +1); hash++)
    {
        printf("#");
    }

    //print the gap
    for(int gap = 1; gap <=2 ; gap++)
    {
        printf(" ");
    }

    //print the right hashes
    for(int hash = 0; hash < (row +1); hash++)
    {
        printf("#");
    }

    //move to the next line
    printf("\n");
}








