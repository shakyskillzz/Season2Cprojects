#include <stdio.h>
#include <string.h>

int main(void){

int prices[7] = {20, 2, 30, 70, 19, 2, 20};
int priceDiffenrece[7];

int least = prices[0];
int max;
int p = 0;


for(int x = 0; x < 6; x++){
    if(prices[x+1] > prices[x]){
        max = prices[x+1];
        priceDiffenrece[p] = max - least;
        //printf("pricedifference[%d] = %d\n", p, priceDiffenrece[p]);
        p++;

        continue;           
    }
    else if (prices[x+1] <= prices[x]){
        least = prices[x+1];
        continue;
    }
}



//printf("arrSize is %d\n", p);

int arrMax = priceDiffenrece[0];

for(int x = 0; x < p-1; x++){
    if(priceDiffenrece[x+1] > arrMax){
        arrMax = priceDiffenrece[x+1];
    }
    //printf("pricesDifferences[%d] = %d\n", x, priceDiffenrece[x]);
}
//printf("The max number is %d", arrMax);
//*********************//
least = prices[0];

p = 0;
int dayBuy, daySell;
int position1, position2;
for(int x = 0; x < 6; x++){
    if(prices[x+1] > prices[x]){
        max = prices[x+1];
        priceDiffenrece[p] = max - least;
        
        //printf("pricedifference[%d] = %d\n", p, priceDiffenrece[p]);
        if(priceDiffenrece[p] == arrMax){
            //printf("Least is %d and max is %d", least, max);
            dayBuy = least;
            daySell = max;
            position2 = x+1;
            break;
        }
        p++;
        continue;           
    }
    else if (prices[x+1] <= prices[x]){
        least = prices[x+1];
        position1 = x+1;
        continue;
    }
}


printf("Least is %d and max is %d", least, max);

int dayBuyReal, daySellReal;

for(int x = 0; x < 7; x++){
    if(prices[x] == dayBuy){
        dayBuyReal = x;
    }
    if(prices[x] == daySell){
        daySellReal = x;
    }    
}
printf("\nBest day to buy is day %d\nBest day to sell is %d\nYou would make a profit of $%d", position1+1, position2+1, arrMax);
return 0;
}          
 