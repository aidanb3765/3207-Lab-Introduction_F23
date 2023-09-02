#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar() {
    // Place a holder for the current time used at the start of the random number generator
    srand(time(null));

    // Generate a random return character from 'A' - 'Z'
    return 'A' + (rand() % 26);
}