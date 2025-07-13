#include <cs50.h>
#include <stdio.h>

//function prototype that takes in a number and prints "meow"

void meow(int u);

//this is a function prototype that get only posiive integers from the user

int get_positive_int(void);

int main(void)
{
    //prompt the user to enter a positve integer and store it in times

    int times = get_positive_int();

    //calling the meow function

    meow(times);


}

//this function keeps prompting the user until a positive integer is entered
int get_positive_int(void)
{
 int y;

 do
 {
    y = get_int("Number: ");

 }
 while(y < 1);
 return y;
}

void meow (int z)
{
    for(int i = 0; i < z;i++)
    {
        printf("meow\n");

    }
}
