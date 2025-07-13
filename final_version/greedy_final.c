#include <stdio.h>
#include <cs50.h>

//function prototypes for calculating each coin
int calculate_quarters(int cent);
int calculate_dimes(int cent);
int calculate_nickel(int cent);
int calculate_penny(int cent);
int main (void)
{

int cents;
//prompt the user until a non-negative amount is entered
do
{
     cents = get_int("changed owned: ");
     if(cents < 0)
     {
      printf("try again!\n");
     }

}
while( cents < 0);



//printf("the changed owned is: ");


//this next line of code takes update the cents so that the values doesn't get pass
//across the others functions
int quarters = calculate_quarters(cents);

cents = cents - (quarters * 25);


int dimes = calculate_dimes(cents);


cents = cents - (dimes * 10);

int nickels = calculate_nickel(cents);


cents = cents - (nickels * 5);

int pennies = calculate_penny(cents);

cents = cents - (pennies * 1);

//each function calculates the number of coins of a given type
int total_coins = quarters + dimes +nickels + pennies;
printf("%i\n",total_coins);






}



int calculate_quarters(int cent)
{
     //quarter count;
     int quarter = 0;

     while(cent >=25)
  {
     cent-=25;
     quarter++;


  }

       return quarter;

}

int calculate_dimes(int cent)
{
     //quarter count;
     int dime = 0;

     while(cent>=10)
     {
       cent-=10;
       dime++;

     }
     return dime;

}

int calculate_nickel(int cent)
{
     //nickel count;
     int nickel = 0;

     while(cent>=5)
     {
     cent-=5;
     nickel++;

     }
     return nickel;


}

int calculate_penny(int cent)
{
     //penny count;
     int penny = 0;

     while(cent>=1)
     {

      cent-=1;
      penny++;

     }
      return penny;
}



