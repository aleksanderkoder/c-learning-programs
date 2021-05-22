#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void start(int n) 
{
    int right, guess = 0, numberOfGuesses = 0; 
    char replayS;
    right = rand() % n;  
    printf("Guess a number between 1 and %d \n", n);

    do
    {
        if(numberOfGuesses > 9) {
            printf("You lose!\n");
            break;
        }
        numberOfGuesses++; 

        scanf("%d", &guess);

        if(guess > right) {
            printf("Your guess is too high!\n");
        }
        else if(guess < right) {
            printf("Your guess is too low!\n");
        }
        else {
            printf("You guessed the correct number in %d attempts!\n", numberOfGuesses);
        }  

    } while (guess != right);
    
    printf("Play again?");
    scanf("%s", &replayS);
    if (strcmp(&replayS,"y") == 0) {
        start(45);
    }
}

int main() {
    start(15);
    return 0;
}

