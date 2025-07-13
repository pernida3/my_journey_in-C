#include <stdio.h>
#include <cs50.h>

int main (void)
{
    // Prompt the user for a valid amount of change

int cents;

do
{
     cents = get_int("changed owned \n");

}
while( cents <= 0);

int count = 0;
//while(cents!=0) original
//the following one is preferred

// Use greedy approach to subtract the largest coin values first
while(cents > 0)
{
    if(cents >=25)
    {
        cents -= 25;
        count++;
    }

    else if(cents >=10)
    {
        cents -= 10;
        count++;
    }
     else if(cents >=5)
    {
        cents -=5;
        count++;
    }
     else if(cents >=1)
    {
        cents -=1;
        count++;
    }

 //output the total number of coins used 
}printf("%i\n",count);






}
