/******************
Name: Halel Marmor
ID: 211560065
Assignment: ex2
*******************/

#include <stdio.h>

int main() {
    // MAIN MENU LOOP
    int option=1;

    do {

        printf("Welcome to our games, please choose an option:\n");
        printf("1. Ducky's Unity Game\n");
        printf("2. The Memory Game\n");
        printf("3. Professor Pat's Power Calculation\n");
        printf("4. The Duck Parade\n");
        printf("5. The Mystery of the Repeated Digits\n");
        printf("6. Good Night Ducks\n");

        scanf("%d",&option);

        switch (option) {
            // TASK 1: Ducky's Unity Game
            case 1: {
                int PositiveNumber, count =0;
                printf("please enter a positive number:\n");
                scanf("%d",&PositiveNumber);
                while (PositiveNumber < 1) {
                    printf("Invalid number, please try again\n");
                    printf("please enter a positive number:\n");
                    scanf("%d",&PositiveNumber);
                }
                while (PositiveNumber > 0) {
                    PositiveNumber = PositiveNumber & (PositiveNumber - 1);
                    count ++;
                }
                printf("Ducky earns %d corns", count);
            }
                break;
            // TASK 2: The Memory Game
            case 2: {
                int DucksNumber;
                printf("please enter the number of ducks:\n");
                scanf("%d",&DucksNumber);
                printf("you entered %d ducks", DucksNumber);
            }
                break;
            // TASK 3: Professor Pat's Power Calculation
            case 3:
                break;
            // TASK 4: The Duck Parade
            case 4:
                break;
            // TASK 5: The Mystery of the Repeated Digits
            case 5:
                break;
            // TASK 6: EXIT
            case 6:
                printf("Good night! See you at the pond tomorrow.");
                break;
            default:
                printf("Invalid option, please try again\n");
                break;
        }
    }while (1> option || option >6);















    // dont forget through all the necessary parts to validate invalid input.

    return 0;
}
