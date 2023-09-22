#include <stdio.h>
#include <string.h>

int main(void){

int x, y;
int userNum;

printf("What size do you want the first array to be?\n");
scanf("%d", &x);
printf("What size do you want the second array to be?\n");
scanf("%d", &y);

int nums1[x+y];
int nums2[y];

for(int i = 0; i < x; i++){
    printf("Give a nunber for array nums1:\n");
    scanf("%d", &userNum);
    nums1[i] = userNum;
    
}
for(int i = 0; i < y; i++){
    printf("Give a nunber for array nums2:\n");
    scanf("%d", &userNum);
    nums2[i] = userNum;   
}

int z = 0;
for(int i = x; i < x+y; i++){
    nums1[i] = nums2[z];
    z++;
}
int temp;
int control;
while(1){
    control = 10;
    for(int i = 0; i < x+y-1; i++){
        
        if(nums1[i+1] < nums1[i]){
            temp = nums1[i];
            nums1[i] = nums1[i+1];
            nums1[i+1] = temp;
            control = 11;
        }
    }
    if(control == 10){
        break;
    }
}
for(int i = 0; i < x+y; i++){
    printf("nums1[%d] = %d\n", i, nums1[i]);
}
return 0;
}             