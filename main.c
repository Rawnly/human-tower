#include <stdio.h>
#include <string.h>
#include <math.h>
#include <printf.h>

#import "utils.c"
#import "models.c"

#define INPUT_SIZE 6

int askForInput(char question[]) {
    char answ[INPUT_SIZE];

    printf(question);
    fgets(answ, INPUT_SIZE, stdin);

    return asciiToInteger(answ);
}

int main()
{
    struct Tower tower;
    int levels = 0;
    int participants = 0;
    int trigger = 0;

    printf("Welcome to LSCastleMaker!\n");

    do {
        participants = askForInput("How many participants?: ");

        for(int i=0; i<INPUT_SIZE; i++) {
            if (participants <= 0 || participants >= 100) {
                trigger = 1;
                errorOrganizer(1);
            }  else {
                trigger = 0;
            }
        }

    } while (trigger == 1);

    /*
     do {
        levels = askForInput("How many levels?: ");

        for(int i=0; i<INPUT_SIZE; i++) {
            if (levels <= 0 || levels >= 10) {
                trigger = 1;
                errorOrganizer(2);
            }  else {
                trigger = 0;
            }
        }

    } while (trigger == 1);
    */

    printf("Participants: %d\n", participants);

    return 0;
}
