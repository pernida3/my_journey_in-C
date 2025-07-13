#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdbool.h>

//a program that counts the number of words in a sentence using minimal state tracking

int main(void)
{
    //prompt user for a sentence
    string sentence = get_string("Enter a sentence: ");

    int i =0;
    int count =0;
    bool in_word =false; //this bool tracks if we are inside a word

    //this loop through each character in the string
    while (sentence[i]!='\0')
    {
        //if current character is not a space and we are not already in a word
        if(sentence[i]!=' ' && in_word ==false)
        {
            count++; //found the start of a new word
            in_word = true; //mark that we're inside a word
        }
        else if(sentence[i] == ' ')
        {
            in_word= false; //exited a word
        }
        i++;
    }
    //output the final word count
    printf("Word count: %i\n", count);
}
