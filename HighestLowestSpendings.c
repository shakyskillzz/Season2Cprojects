#include <stdio.h>

int main(void){

float spendings[7] = {};
float highest, lowest;
float spent;
int dayLowest, dayHighest;
  
for(int i = 0; i<7; i++){

    switch(i){
        case 0:
          printf("How much did you spend on monday?\n");
          scanf("%f", &spent);
          spendings[i] = spent;
          break;
        case 1:
          printf("How much did you spend on tuesday?\n");
          scanf("%f", &spent);  
          spendings[i] = spent;
          break;
        case 2:
          printf("How much did you spend on wednesday?\n");
          scanf("%f", &spent);
          spendings[i] = spent;
          break;
        case 3:
          printf("How much did you spend on thursday?\n");
          scanf("%f", &spent);
          spendings[i] = spent;
          break;  
        case 4:
          printf("How much did you spend on friday?\n");
          scanf("%f", &spent);
          spendings[i] = spent;
          break;
        case 5:
          printf("How much did you spend on saturday?\n");
          scanf("%f", &spent);
          spendings[i] = spent;
          break;
        case 6:
          printf("How much did you spend on sunday?\n");
          scanf("%f", &spent);
          spendings[i] = spent;
          break;
    //spendings[i] = spent;
  }
}
highest = spendings[0];
lowest = spendings[0];
for(int i = 0; i<6; i++){
    //printf("spending[%d] = %.2f\n", i, spendings[i]);
    if(spendings[i+1] < lowest){
        lowest = spendings[i+1];
        if (i == 0){
            dayLowest = i;
        }else{
            dayLowest = i+1;
        }

    }
    if(spendings[i+1] > highest){
        highest = spendings[i+1];
        if (i == 0){
            dayHighest = i;
        }else{
            dayHighest = i+1;
        }
    }
}
switch(dayHighest){
    case 0:
        printf("You spent the most money on monday: $%.2f\n", highest);
        break;
    case 1:
        printf("You spent the most money on tuesday: $%.2f\n", highest);
        break;
    case 2:
        printf("You spent the most money on wednesday: $%.2f\n", highest);
        break;
    case 3:
        printf("You spent the most money on thursday: $%.2f\n", highest);
        break;
    case 4:
        printf("You spent the most money on friday: $%.2f\n", highest);
        break;
    case 5:
        printf("You spent the most money on saturday: $%.2f\n", highest);
        break;
    case 6:
        printf("You spent the most money on sunday: $%.2f\n", highest);
        break;
}
switch(dayLowest){
    case 0:
        printf("You spent the least money on monday: $%.2f", lowest);
        break;
    case 1:
        printf("You spent the least money on tuesday: $%.2f", lowest);
        break;
    case 2:
        printf("You spent the least money on wednesday: $%.2f", lowest);
        break;
    case 3:
        printf("You spent the least money on thursday: $%.2f", lowest);
        break;
    case 4:
        printf("You spent the least money on friday: $%.2f", lowest);
        break;
    case 5:
        printf("You spent the least money on saturday: $%.2f", lowest);
        break;
    case 6:
        printf("You spent the least money on sunday: $%.2f", lowest);
        break;
}
return 0;
}