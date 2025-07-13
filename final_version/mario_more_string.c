#include <stdio.h>
#include <string.h>
#include <cs50.h>
//builds a double-sided pyramid using strings and manual string construction logic
int main(void)
{
    int height;

    do
    {
        height = get_int("height(1-8): ");
    }
    while(height < 1 || height > 8);

    //we'll use this line buffer to construct each row

    char line[32];

    for(int row =0; row < height;row++)
    {
        //start with an empty string for the line
        strcpy(line,"");

        //add left spaces
        for(int space = 0; space < height - row - 1;space++)
        {
            strcat(line," ");
        }

        //add left hashes
        for(int hash = 0; hash < row + 1 ; hash++)
        {
            strcat(line,"#");
        }

        //add the gap
        strcat(line, "  ");


        //add the right hashes

        for(int hash =0; hash <row + 1;hash++)
        {
            strcat(line,"#");
        }

        //print the full line

        printf("%s\n",line);
    }

    return 0;
}
