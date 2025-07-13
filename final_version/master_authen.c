#include <cs50.h>
#include <stdio.h>

//fucntion prototypes
void greetmaster(void);//greets the user
void master_age(void);// authenticates the user based on age

int main (void)
{
    //welcome message and first authentication step
    greetmaster();
    printf("if you are master then answer these questions\n");

    //first layer of authentication using a password(cheek)
   int cheek=get_int("what is cheek: ");
   printf("cheek has been recorded\n ");

   //password to verify against
   int pwd =1234;


   //if the password is correct
    if (cheek ==pwd)
    {
        printf("if you have gotten to this stage then good pseudo-master let's take it further for much more control\n ");
        master_age();//proceed to second verification
    }
    else if (cheek!=pwd)
    {
        //wrong password
        printf("You have failed to answer,you will just received the minimum of courtesy also bye bye\n ");
    }
   // printf("can you proceed to let me authenticate if you are my master or not\n");
   // master_age();

   return 0;
}

//function to greet the user

void greetmaster(void)
{
    printf("welcome sir, please proceed to know if you are master,pseudo-master, or just a Nobody.\n");
}

//second layer of authentification by age

void master_age(void)
{
    int age = get_int("Enter your age: ");

    //secret age used for further verification

     int cheek2 = 1490;

     if(cheek2 == age)
     {
         printf("Welcome Master, you have full authority.\n");
     }
      else
      {
        printf("You are not master but still welcome. Middle level of courtesy.\n");
      }


}
