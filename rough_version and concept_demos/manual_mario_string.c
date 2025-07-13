#include <stdio.h>
#include <string.h>

//this is a prototype of the mario more confortable string version , helped me visualize
//how to come up with it
int main (void)
{
  //first let's initialize the pyramid
  int pyramid = 4; //pyramid heigh
  char line [100]; //buffer to  build lines

  //manually construct each line and concatenate to form pyramid
  strcpy(line, "   #\n");          // Line 1: 3 spaces, 1 hash
    strcat(line, "  ##\n");       // Line 2: 2 spaces, 2 hashes
    strcat(line, " ###\n");      // Line 3: 1 space, 3 hashes
   strcat(line, "####\n");     // Line 4: 0 space, 4 hashes
  //print the full pyramid
  printf("%s",line);
}
