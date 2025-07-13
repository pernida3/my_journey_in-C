#include <stdio.h>
#include <cs50.h>


//a program that converts lowercase letters in a string to uppercase
int main(void)
{
    //getting input from the user
    string name = get_string("Before uppercase: ");

    printf("After uppercase: ");

    int i = 0;

    //loop through each character of the string
    while(name[i]!= '\0')
    {
        //if the character is lowercase convert to uppercase using ASCII
        if(name[i]>='a' && name[i]<='z')
        {
            printf("%c",name[i] - 32);//convert to lowercase
        }
        else
        {
            //print it unchanged if it is already uppercase or any other
            printf("%c",name[i]);
        }
        i++;
    }
    printf("\n");
}
