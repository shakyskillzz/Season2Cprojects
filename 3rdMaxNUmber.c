#include <stdio.h>
int main(void){
int num;
int sizeArray;
int temp;
int control;
int firstMax, secondMax, thirdMax;
int y = 0;
//int numbers[sizeArray];

printf("What size do you want the array\n");
scanf("%d", &sizeArray);
int numbers[sizeArray];

for(int i =0; i < sizeArray; i++){
    printf("What is number %d?\n", i+1);
    scanf("%d", &num);
    numbers[i] = num;
}
while(1){
    control = 69;
    for(int i =0; i < sizeArray-1; i++){
        if(numbers[i+1] > numbers[i]){
            temp = numbers[i];
            numbers[i] = numbers[i+1];
            numbers[i+1] = temp;
            control = 70;
        }
    }
    if(control == 69){
        break;
    }
}
//printf("numbers[0] = %d", numbers[0]);
firstMax = numbers[0];

for(int i =1; i < sizeArray; i++){
    control = 69;
    if(numbers[i] == firstMax){
        continue;

    }else {
        secondMax = numbers[i];
        y = 1;
        for(int x = i+1; x < sizeArray; x++){
            if(numbers[x] == secondMax){
                continue;
            }else {
                thirdMax = numbers[x];
                control = 70;
                y++;
                break;
            }
        }
    }
    if(control == 70){
        break;
    }
}
switch(y){
    case 0:
    printf("First max is %d\n", firstMax);
    break;
    case 1:
    printf("First max is %d\nsecond max is %d\n", firstMax, secondMax);
    break;
    case 2:
    printf("First max is %d\nsecond max is %d\nthird max is %d", firstMax, secondMax, thirdMax);
    break;
}
return 0;
}