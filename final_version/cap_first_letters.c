#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    //prompt the user for a sentence
    string sentence = get_string("Enter a sentence to capitalize: ");

    int i =0;
    bool first_letter =false;

    //loop through each character until the end of the string
    while(sentence[i]!= '\0')
    {
        //if the current character is not a space and we're at the start of a word
        if(sentence[i]!=' ' && first_letter ==false)
        {
            first_letter =true;
            //if the character is lowercase,convert to uppercase using ASCII math
            if (sentence[i]>='a' && sentence[i]<='z')
            {
            printf("%c",sentence[i]-32); //convert to uppercase
            }
           else
            {
            //if already uppercase or not a letter,just print as it is
            printf("%c",sentence[i]);
            }
        }
        else if(sentence[i] == ' ')
        {
            //print the space and reset the flag so the next character
            //is treated as a first letter
            printf(" ");
            first_letter =false;
        }
        else
        {
            //if inside a word, print character as it is
            printf("%c",sentence[i]);
        }
        i++;

    }

    printf("\n");
}
