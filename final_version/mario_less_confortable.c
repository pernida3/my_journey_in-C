#include <cs50.h>
#include <stdio.h>

/*This version is mario less confortable ,building a left aligned pyramid based on
user provided heigth*/

//funtion prototype to print a single row of the pyramid
void print_row(int height ,int row);

int main(void)
{
    int height;

    //prompt the user to enter a valid height between 1 and 8 inclusive

    do
    {
        height = get_int("what is the height?: ");
    }
    while (height < 1 || height > 8);


    // use a loop to print each row of the pyramid by calling a helper function
    for (int row = 0; row < height; row++)
    {
        print_row(height, row);
    }
}

//this function print a single row of the pyramid
void print_row(int height ,int row)
{
    //print the left spaces of the pyramid

    for(int col = 1; col <(height - row);col++)
    {
        printf(" ");
    }

    //print the hahses that make up the visible steps of the pyramid
    for(int hash = 0; hash < (row +1); hash++)
    {
        printf("#");
    }

    //move to the next line after printing each row
    printf("\n");
}

