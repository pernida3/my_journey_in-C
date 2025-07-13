#include <stdio.h>
#include <cs50.h>

//this program prints name , age and hometown
int main (void)
{
    //name

    string name =get_string("What is your name? ");

    //Age

    int Age =get_int("what is your age? ");

    //Hometown

    string hometown = get_string("What is  your hometown? ");


    //Phone Number

    string number = get_string("What is your phone number? ");

    //print out formatted result
    printf("Hi my name is %s. I am %i and I am from %s and my phone number is %s ",name,Age,hometown,number);

}
