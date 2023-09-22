#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int coinFlip(){

srand(time(0));
int number = rand() % 2;
//tails = 1
//heads = 0

return number;    
}

int main(void){

char answer[5];

//printf("%d", coinFlip());

while (1){
    if (coinFlip() == 1){
        printf("you have tails!\n");
    }
    else if(coinFlip() == 0){
        printf("You have heads!\n");
    }                                           

    printf("Do you want to continue?\nno to quit\n");
    scanf("%s", answer); 

    if (strcmp(answer, "no") == 0){
        break;
    }
    else{
        continue;
    }
}

return 0;
}
