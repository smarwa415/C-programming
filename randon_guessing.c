//single line comment
//random guessing
/*multiline comment
Author:marwa socrates makongo
Reg NO.: BCS-05-0047/2025
Date:3/10/2026
Description: program that implements random number guessing
Version:
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess;
    int attempts = 0;

    srand(time(NULL));
    secret = (rand() % 20) + 1;

    do {
        printf("Enter your guess (1-20): ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secret) {
            printf("Too high!\n");
        }
        else if (guess < secret) {
            printf("Too low!\n");
        }
        else {
            printf("Congratulations!\n");
        }

    } while (guess != secret);

    printf("Total attempts: %d\n", attempts);

    return 0;
}
