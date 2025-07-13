#include <stdio.h>
#include <cs50.h>

// function prototype: this will print height number of '#' characters
void print_height(int height);

int main(void)
{
    // ask user for the height of the pyramid
    int h = get_int("height: ");

    // call the function to print the pyramid
    print_height(h);

    return 0;
}

// this function prints a vertical stack of '#' characters,
// one per line, equal to the given height.
void print_height(int height)
{
    for (int i = 0; i < height; i++)
    {
        printf("#\n");
    }
}
