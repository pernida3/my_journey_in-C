#include <cs50.h>
#include <stdio.h>
//a program that count the number of characters in a string including the spaces
int main(void)
{
    //prompt the user to enter a string
    string name = get_string("Name: ");

    int n =0;
    int count =0;

    //a while loop that loop through each character until the null terminator is reached
    while(name[n]!='\0')
    {
        //if the current character is not the null terminator ,increase count
        if(name[n]!='\0')
        {
            count++;
        }
        n++;
    }
    //output the result
    printf("Character count (space included): %i\n", count);
}
