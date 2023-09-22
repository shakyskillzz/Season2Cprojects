#include <stdio.h>
#include <string.h>

int main(void){

char sentence[100];

printf("Enter your sentence tony\n");
scanf("%[^\n]%*c", sentence);
//printf("%s", sentence);

int sizeOfSentence = 0;

for(int i = 0; sentence[i] != '\0'; i++){
    sizeOfSentence++;
}


char number = '1';
char newSentence[100];
int control;
int position;
int a = 0;
while(1){
    control = 69;
    printf("Number is %c\n", number);

    for(int x = 0; x < sizeOfSentence; x++){

        if(sentence[x] == number){
             control = 21;
            for(int y = x; y > 0; y--){
                if(sentence[y] == ' ' || sentence[y] == '\0'){
                    //printf("y is %d\n", y);
                    position = y;
                    for(int z = position; z < sizeOfSentence; z++){
                        printf("Z IS %d", z);
                        a++;
                        if(sentence[z] == ' ' || sentence[z] == '\0'){
                            break;
                        }
                    }
                    break;
                }
            }

            number++;
            break;
        }
    }

    printf("Again, number is %c\n", number);
    if(sentence[position] == ' '){
        printf("CHECK\n");
    }
    if(control == 69){
        break;
    }
}

for(int i = 0; newSentence[i] != '\0'; i++){
    printf("newSentence[%d] = %c\n", i, newSentence[i]);
}

//printf("New sentence is:\n %s", newSentence);
return 0;
}          
   