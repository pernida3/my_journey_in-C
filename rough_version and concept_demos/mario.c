#include <stdio.h>
#include <cs50.h>
void print_left(int n,int f,string q, string w , string a , string e , string t);
//void print_space(int space);

int main (void)
{
  //define the variable height of type int
  int height;
  string left_space =".";

  string width =".";
  string left_h= "#" ;
  string right_h="#";
  //string n;
  // do while loop that prompt the user to enter only the valid numbers and record the heights chosen

  do
  {
     height = get_int("What is the height? " );
  }
  while (height <1 || height >8 );

// a for loop and a function call that display the height chosen recorded
  for (int row = 0; row < height; row++)
  {
    //print_space(height);

    print_left(height,row,left_space,width,left_h,right_h,);
  }

}


void print_left(int height, int row, string d ,string w , string r , string p , string v)
{
  //print the appropriate number of spaces
  //and decrease it as the number of hashes increases
  for (int col = 1; col<(height-row); col++)
  {
    d;
  }

  for (int hashes = 0; hashes <row+1;hashes++)
  {
    r;
  }


  //a fix width
  for (int width = 0; width<2;width++)
  {
    w;
  }
   for (int hash = 0; hash<(row+1);hash++ )


  // a for loop for the right column
  for (int colr = 0;colr<=row;colr++)

  if (row==height(-1))
  {
    n = "\n";
  }
  else if(row<height)
  {
    n ="";
  }

  printf("%s%s%s%s%s",left_space);





}


