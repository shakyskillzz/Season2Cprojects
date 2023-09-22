#include <stdio.h>
#include <string.h>

int main(void){

char userInput[50];
int i;
int x;
int z;
printf("Type a sentence:\n");
scanf("%[^\n]%*c", userInput);

for(i = 0; userInput[i] != '\0'; i++){
    if(userInput[i] == ' '){
        x = i;
    }
}

//printf("x is equal to %d\n", x);
if(x == 0){
    for(int y = x; userInput[y] != '\0'; y++){
        z++;    
    }        
}

else{
    for(int y = x+1; userInput[y] != '\0'; y++){
        z++;   
    }     
}
printf("The length of the last word is %d", z);
return 0; 
}
