#include <stdio.h>

void twoSum(int *nums, int numTarget);


int main(void){

int nums[5] = {3,1,2,5,4};
int target = 7;

twoSum(nums, target);
printf("%d and %d", nums[0], nums[1]);

return 0;
}



















void twoSum(int *nums, int numTarget){
    int first, second;
    int test = 0;
    for(int x = 0; x < 5-1; x++){
        if(test == 69){
            break;
        }
        for(int y = x+1; y < 5; y++){
            if(test == 69){
            break;
            }
            if(nums[x]+nums[y] == numTarget){
                first = x;
                second = y;
                test = 69;
                break;
            }
        }
    }
    nums[0] = first;
    nums[1] = second;
}

