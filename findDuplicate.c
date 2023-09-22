#include <stdio.h>
#include <string.h>
int main(void){

int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 7};
int x, y;
int variable = 2;


  for (x = 0; numbers[x] != '\0'; x++){
    if (variable == 5){
      break;
    }
    //printf("numbers[%d] = \"%d\"\n", x, numbers[x]);
    for(y = x+1; numbers[y] != '\0'; y++){

      //printf("numbers[%d] = '%d'\n", y, numbers[y]);
      if(numbers[x] == numbers[y]){
        printf("True");
        variable = 5;
        break;
      }

    }

  }
  if(variable == 2){
    printf("False");
  }
return 0;
}

