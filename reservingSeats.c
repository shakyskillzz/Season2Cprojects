#include <stdio.h>
#include <string.h>
int main(void){

int totalSeats = 100;
float priceSeats = 50;
char answer[5] = "yes";
int seatsReserved;
int totalSeatsReserved = 0;

char nameList[100][25] = {""};  

int i = 0;
int userSeatChoice;


while(strcmp(answer, "yes") == 0){
    printf("How many seats will you like to reserve? There are %d seats remaining.\n", totalSeats);
    scanf("%d", &seatsReserved);
    if(seatsReserved <= 0){       
        break;
    }
    totalSeats -= seatsReserved;
    totalSeatsReserved += seatsReserved;

    printf("Price per seat is $%.2f\nYour total would be $%.2f\n", priceSeats, priceSeats * seatsReserved);
    printf("Would you like to proceed? Type 'yes' or 'no'.\n");
    scanf("%s", answer);

    for(int x = 0; x < seatsReserved; x++){
        printf("What is the name for seat number %d\n", i+1);
        scanf("%s", nameList[i]);
        i++;
         
    }
    printf("Would you like to book more seats? 'yes or 'no'.\n");
    scanf("%s", answer);
    
}
printf("You have reserved %d seats, Your total will be $%.2f\n", totalSeatsReserved, totalSeatsReserved * priceSeats);
//printf("Seat number 2 is for %s", nameList[1]);
char answer2[5];
int seatNumberCheck;

while(1){
    printf("Would you like to check the name of a seat? 'yes' or 'no'\n");
    scanf("%s", answer2);
    if(strcmp(answer2, "no") == 0){
        break;
    }
    printf("Type in the seat number you want to check\n");
    scanf("%d", &seatNumberCheck);
    printf("Seat number %d is for %s\n", seatNumberCheck, nameList[seatNumberCheck-1]);
}
return 0;
}             