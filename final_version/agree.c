#include <cs50.h>
#include <stdio.h>


int main (void )
{

  //prompt the user for a single character input
  char c = get_char("Do you agree? ");

  //this checks if the character is 'y' or 'Y'
  if (c=='y' || c=='Y')
  {
    printf("Agreed.\n");
  }

  //this checks if the character is 'n' or 'N'
  else if  (c=='n'||c=='N')
  {
    printf(" Do not agree.\n");
  }

}


