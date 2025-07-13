#include <cs50.h>
#include <stdio.h>

//function prototype - intended to print "meow" u times

void meow(int u);

int main(void)
{
    int y = get_int("Number: ");
    meow(y); //Argument is passed , but ignored in function
}

//this funcion print "meow" n times
// but because k is harcoded (k = 0), the function nevers prints

void meow(int n)
{
    int k = 0; //mistake: k is always 0 , so the loop nevers runs
}


/*Note to the futur me
:

this version was written to explore how parameters work.and even though we pass 'y'
into meow(y),the function ignores it and uses ' k =0', showing that function
parameters are local variables an can be overriden (even accidentally)

the lesson learned us to respect the argument passed into the function unless you
intentionally override it

Hi past self i visited it and laughed at it 🤣🤣🤣 */
