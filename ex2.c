/******************
Name:
ID:
Assignment:
*******************/

#include <stdio.h>

int main()
{
    // MAIN MENU LOOP
    int option=2;

   do {
       if (1> option || option >7) {
           printf("Invalid option, please try again\n");
       }

       printf("Welcome to our games, please choose an option:\n");
       printf("1. Ducky's Unity Game\n");
       printf("2. The Memory Game\n");
       printf("3. Professor Pat's Power Calculation\n");
       printf("4. The Duck Parade\n");
       printf("5. The Mystery of the Repeated Digits\n");
       printf("6. Good Night Ducks\n");

    scanf("%d",&option);
   }while (1> option || option >7);



    // TASK 1: Ducky's Unity Game

    // TASK 2: The Memory Game

    // TASK 3: Professor Pat's Power Calculation

    // TASK 4: The Duck Parade

    // TASK 5: The Mystery of the Repeated Digits

    // TASK 6: EXIT

    // dont forget through all the necessary parts to validate invalid input.

    return 0;
}
