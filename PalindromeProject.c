#include <stdio.h>
#include <ctype.h>
#include <string.h>

void isPalindrome(int x){

    int intLen = 0;
    int bax = x;
    int rev;
    int ten = 10;
    //int rev2;
    do{
        x /= 10;
        intLen++;
    }
    while(x != 0);
        printf("The length of x is %d\n", intLen);


         
    for(int i = 0; i < (intLen); i++){
        rev = bax % ten;
        //printf("\n%d", rev);
        if(rev < 100 && rev >= 10){
            printf("%d", rev/10);
        }
        else if(rev >= 100){
            printf("%d", rev / (ten/10));
        }
        else{
            printf("%d", rev);
        }
        ten *= 10;
    /*if (rev == bax){
        printf("\nThey are equal tony.");
    }*/
    }
    if (rev == bax){
        printf("\nThey are equal tony.");           
    }else{
        printf("Fuck off");
    }
}
        

        
 



    
    

int main(void){
int myNumber;
printf("Enter a number: ");
scanf("%d", &myNumber);
    isPalindrome(myNumber);
return 0;
}
