#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(void){

int swapped;
int sizeArray = 10;
int numArray[10] = {1,8,5,1,7,3,5,7,9,2};
int x, y;
int temp;
int numbersRemoved = 0;
while(1){
    swapped = 0;

    for(int i = 0; i < sizeArray-1; i++){
        if(numArray[i+1] < numArray[i]){
            temp = numArray[i];
            numArray[i] = numArray[i+1];
            numArray[i+1] = temp;
            swapped = 1;
        }
        //printf("[%d]\n", numArray[i]);        
    }
    if(swapped == 0){
    break;
    }
}
for(int i = 0; i < sizeArray-numbersRemoved; i++){

    for(x = i; x < sizeArray-1-numbersRemoved; x++){
        if(numArray[i] == numArray[x+1]){
            //printf("They are equal tony");
            for(y = x; y < sizeArray-1; y++){
                numArray[y] = numArray[y+1];
            }
            numbersRemoved++;
        }
    }
}
for(int i = 0; i < sizeArray-numbersRemoved; i++){
    printf("[%d]\n", numArray[i]);    
}
printf("\nNumbers removed = %d", numbersRemoved);
return 0;
}
