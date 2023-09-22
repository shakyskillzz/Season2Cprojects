#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int myFunction(int* nums){
    int arrSize = 0;

    for(int x = 0; nums[x] != '\0'; x++){
        arrSize++;
    }
    //printf("\nArray size is %d\n", arrSize);

    int temp, lit;
    while(1){
        lit = 69;
        for(int x = 0; x < arrSize-1; x++){
            if(nums[x+1] < nums[x]){
                lit = 420;
                temp = nums[x];
                nums[x] = nums[x+1];
                nums[x+1] = temp;
            }
        }
        if(lit == 69){
            break;
        }
    }
    /*printf("%d ", nums[0]);
    printf("%d ", nums[1]);
    printf("%d ", nums[2]);
    printf("%d ", nums[3]);
    printf("%d ", nums[4]);
    printf("%d ", nums[5]);
    printf("%d ", nums[6]);
    printf("%d ", nums[7]);*/

    int numberRemoved = 0;
    
    while(1){
        int test = 69;
        int test2 = 69;
        for(int x = 0; x < arrSize-numberRemoved-1; x++){
            if(test2 == 420){
                break;
            }
            for(int y = x; y < arrSize-numberRemoved-1; y++){
                if(test2 == 420){
                    break;
                }
                if(nums[y+1] == nums[x]){
                    test = 420;
                    test2 = 420;
                    for(int z = y; z < arrSize-numberRemoved-1;z++){
                        temp = nums[z];
                        nums[z] = nums[z+1];
                        nums[z+1] = temp;                        
                    }
                    numberRemoved++;
                }
            }
        }
        if(test == 69){
            break;
        }
    }
    /*printf("\n%d ", nums[0]);
    printf("%d ", nums[1]);
    printf("%d ", nums[2]);
    printf("%d ", nums[3]);
    printf("%d ", nums[4]);
    printf("%d ", nums[5]);
    printf("%d ", nums[6]);
    printf("%d ", nums[7]);
    printf("\nNunbers removed is %d", numberRemoved);*/
    return arrSize-numberRemoved ;
}

int main(void){

int nums[20] = {5,2,6,5,2,1,2,5};


int arraySize = myFunction(nums);
printf("\n[");
for(int x = 0; x < arraySize; x++){
    printf("%d,", nums[x]);
}

printf("]");
return 0;
}



// The only problem is I cant put a zero in the number array because it detects it as a NULL when im using the FOR loop to calculate the array size