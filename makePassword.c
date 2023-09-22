#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*void myFunction(int *numberList){

    
    printf("Your number is %d\n", numberList[0]);
    printf("pointer is %p", &numberList[0]);

} */

int main(void){

char password[25];
printf("Enter a password:\n");
scanf("%s", password);

int digit = 0, upper = 0, special = 0;

for(int i = 0; password[i] != '\0'; i++){
    if(isalpha(password[i]) == 1){
        if(isupper(password[i]) == 1){
            upper = 1;
        }
    }
    else{
        if(isdigit(password[i]) == 1){
            digit = 1;
        }
        else{
            special = 1;
        }
    }
}

printf("%d and %d and %d", digit, upper, special);

return 0;
}