#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>  
int guess(int myGuess, int randomNumber){
    int i;
    if(myGuess > randomNumber){
        i = 1;
    }
    else if(myGuess < randomNumber){
        i = -1;
    }
    else{
        i = 0;
    }

    return i;
}

int main(void){

int n, userInput;
int y = 3;
srand(time(0));

printf("Type a number to guess between 1 and:\n");
scanf("%d", &n);
int number = rand() % (n+1);
//printf("%d\n", number);

while(y != 0){
    printf("Guess a number between 1 and %d\n", n);
    scanf("%d", &userInput);
    int x = guess(userInput, number);
    switch(x){
        case 1:
        printf("Your guess was too high\n");
        y--;
        break;
        case 0:
        printf("You got it right!\n");
        y = 0;
        break;
        case -1:
        printf("Your guess was too low\n");
        y--;
        break;
    }
    if(y > 0){
        printf("You have %d guesses left\n", y);

    }
}

printf("Your number was %d!", number);

return 0;
} 
