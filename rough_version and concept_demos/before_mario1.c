#include <stdio.h>
#include <cs50.h>

int main (void)
{
    //set the height of the pureamid manually (not prompted from the user)
    int pyramid = 2 ;
    int row ;
       string h ;
//     int col;
    //first version
    //a basic version of printing rows of hashes
    for (row = 0; row<pyramid ;row++ )
    {
        //assign a hardcoded string of hashes with a newline
        h = "####\n";

        //print the string for each row 
        printf("%s",h);

    }


    return 0 ;
}
