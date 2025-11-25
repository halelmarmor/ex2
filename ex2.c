/******************
Name: Halel Marmor
ID: 211560065
Assignment: ex2
*******************/

#include <ctype.h>
#include <math.h>
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
                int positiveNumber, count =0;
                printf("please enter a positive number:\n");
                scanf("%d",&positiveNumber);
                while (positiveNumber < 1) {
                    printf("Invalid number, please try again\n");
                    scanf("%d",&positiveNumber);
                }
                while (positiveNumber > 0) {
                    positiveNumber = positiveNumber & (positiveNumber - 1);
                    count ++;
                }
                printf("Ducky earns %d corns\n", count);
            }
                break;
                // TASK 2: The Memory Game
            case 2: {
                int ducksNumber;
                long quak, quaks=0;
                printf("please enter the number of ducks:\n");
                scanf("%d",&ducksNumber);
                while (ducksNumber < 1) {
                    printf("Invalid number, please try again\n");
                    scanf("%d",&ducksNumber);
                }
                printf("you entered %d ducks\n", ducksNumber);
                for (int i = 0; i<ducksNumber; i++) {
                    printf("duck %d do QUAK? 1 for yes, 0 for no\n", i+1);
                    scanf("%ld",&quak);
                    while (quak !=0 && quak !=1) {
                        printf("Invalid number, please try again\n");
                        scanf("%ld",&quak);
                    }
                    if (quak == 1) {
                        quaks |= (1ull << i);
                    }
                }
                for (int i = 0; i<ducksNumber; i++) {
                    if (quaks & (1ull << i)) {
                        printf("duck number %d do Quak\n", i+1);
                    } else {
                        printf("duck number %d do Sh...\n", i+1);
                    }

                }

            }

                break;
                // TASK 3: Professor Pat's Power Calculation
            case 3: {
                int number, exponent, power=1;
                printf("please enter the number\n");
                scanf("%d",&number);
                while (number < 0) {
                    printf("Invalid number, please try again\n");
                    scanf("%d",&number);
                }
                printf("please enter the exponent\n");
                scanf("%d",&exponent);
                while (exponent < 0) {
                    printf("Invalid number, please try again\n");
                    scanf("%d",&exponent);
                }
                if (exponent == 0 && number == 0) {
                    power = 1;
                } else {
                    for (int i = 0; i<exponent; i++) {
                        power = power * number;
                    }
                }
                printf("your power is: %d\n", power);
            }
                break;
                // TASK 4: The Duck Parade
            case 4: {
                int numberOfDucks;
                printf("please enter number of ducks:\n");
                scanf("%d",&numberOfDucks);

                while (numberOfDucks < 0) {
                    printf("Invalid number, please try again\n");
                    scanf("%d",&numberOfDucks);
                }
                if (numberOfDucks == 0) {
                    option=0;

                } else {
                    for (int i = 0; i<numberOfDucks/10; i++) {
                        printf("   _\t\t   _\t\t   _\t\t   _\t\t   _\t\t   _\t\t   _\t\t   _\t\t   _\t\t   _\t\t\n");
                        printf("__(o)>\t\t__(o)>\t\t__(o)>\t\t__(o)>\t\t__(o)>\t\t__(o)>\t\t");
                        printf("__(o)>\t\t__(o)>\t\t__(o)>\t\t__(o)>\t\t\n");
                        printf("\\___)\t\t\\___)\t\t\\___)\t\t\\___)\t\t\\___)\t\t");
                        printf("\\___)\t\t\\___)\t\t\\___)\t\t\\___)\t\t\\___)\t\t\n");

                    }
                    for (int i = 0; i<numberOfDucks%10; i++) {
                        printf("   _\t\t");
                    }
                    printf("\n");
                    for (int i = 0; i<numberOfDucks%10; i++) {
                        printf("__(o)>\t\t");
                    }
                    printf("\n");
                    for (int i = 0; i<numberOfDucks%10; i++) {
                        printf("\\___)\t\t");
                    }
                    printf("\n");
                }
            }
                break;
                // TASK 5: The Mystery of the Repeated Digits
            case 5: {
                int digit;
                printf("please enter number\n");
                scanf("%d",&digit);
                while (digit < 1) {
                    printf("Invalid number, please try again\n");
                    scanf("%d",&digit);
                }
                while (digit > 0) {
                    int currentDigit = digit%10;
                    int restDigit = digit/10;
                    int repeatDigit = 0;
                    while (restDigit > 0) {
                        if (restDigit%10 == currentDigit) {
                            repeatDigit = 1;
                            break;
                        }
                        restDigit /= 10;
                    }
                    if (repeatDigit) {
                        printf("%d appears more than once!\n", currentDigit);
                    }
                        digit /= 10;
                }
            }
                break;
            // TASK 6: EXIT
            case 6:
                printf("Good night! See you at the pond tomorrow.");
                break;
            default:
                printf("Invalid option, please try again\n");
                break;
        }
    }while (option!=6);

    // dont forget through all the necessary parts to validate invalid input.

    return 0;
}