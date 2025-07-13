#include <stdio.h>
#include <cs50.h>

int main(void)
//this version is a first draft , and i might try other logic style in the future
//like using odd/even or boolean-based approach
{

    long cards;


     do
    {
        cards = get_long("enter your card digit: ");
        if (cards < 1)
        {
            printf("Try Again!\n");
        }
    }
    while(cards < 1);

    //set up variables for tracking digits and checksums

    long number = cards;
    long unchanged_digit = cards;
    long doubled_digits = cards;
    long star_digit = cards;


    long sum1 = 0;  // Sum of digits not multiplied by 2
    long sum2 = 0;  // Sum of digits after multiplying by 2 (and splitting if needed)
    int product = 0;
    int count1 = 0; // Digit counter
    int final_value = 0;

    //Main loop , walks through card digits from right to left
    while(number > 0)
    {

        count1++;   //count total number of digits


        //this is the first step :taking the last digit ( not to be doubled)
        int digit = unchanged_digit % 10;
        unchanged_digit /=100; //move two steps left for the next - doubled

        sum1 += digit;

        //this is the second step: take the second to the last digit (to be doubled)
        doubled_digits /= 10;   //move to the second-to-last digit

        int digit2 = doubled_digits % 10;
        doubled_digits /= 10;

        //double the digit
        product = digit2*2;

        //if the product is two digits,add both digits
        if(product > 9)
        {
            int first_value = product % 10;
            int second_value = product / 10;
            product = second_value + first_value;
        }

        //add the result to sum2
        sum2 += product;

        //move number pointer one digit to the left(to keep the loop running )
        number /= 10;
    }

    while (star_digit >= 100)
    {
        star_digit /= 10;
    }

    int second_digit = star_digit / 10;

    //final checksum
    final_value = (sum1 + sum2) % 10;

    //this is an edge case : card is 0 or no digits

    if(cards == 0 || count1 == 0)
    {
        printf("card declined");
        return 0;
    }

    //if the final checksum is valid

    if(final_value == 0 && (star_digit != 0 || count1 > 0))
    {
        printf("card accepted\n");
        printf("digit number: %i\n",count1);
        printf("card type confirmed\n");


        //card type classification

        if(second_digit == 4 && (count1 == 13 || count1 == 16))
        {
            printf("Visa\n");
        }
        else if((star_digit >= 51 && star_digit <= 55)&& count1 == 16)
        {
            printf("MasterCard\n");
        }
        else if((star_digit == 34 || star_digit == 37)&& count1 == 15)
        {
            printf("Amex\n");
        }
        else
        {
            printf("Card declined\n");
        }
    }
    else
    {
        printf("Card declined\n");
    }






}
