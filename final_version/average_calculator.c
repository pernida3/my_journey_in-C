#include <cs50.h>
#include <stdio.h>
//a program that calculate the average of an array of scores

//function prototype
float average(int height, int array[]);

//constant to define how many scores to enter
const int N = 3;

int main(void)
{

    int scores[N];

    //prompt the user to enter N scores
    for(int i = 0; i< N; i++)
    {
        scores[i] =get_int("score %i: ", i + 1);

    }
    //print the average score with 2 decimal places
    printf("Average score %.2f\n",average(N,scores));
}


//this function calculate the average of the scores
float average (int height , int array[])
{
    int sum = 0;

    //here is the sum of all the elements of the array
    for(int j =0; j< height; j++)
    {
        sum+= array[j];
    }
    //return the average as a float
    return sum/(float)height;
}


