//Digit sum and reversal
/* Read an integer, then use a while loop to compute the sum of its digits and 
print the number reversed. Handle negative numbers correctly. */

#include <stdio.h>
int main(){
    int num, sum=0, reversed=0, originalNum;
    printf("Enter an integer: ");
    scanf("%d",&num);
    originalNum = num;
    if(num<0){
        num=-num;
    }

    while(num>0){
        sum+=num%10;
        reversed=reversed*10+num%10;
        num/=10;
    }

    printf("Sum of digits of %d is: %d\n", originalNum, sum);
    if(originalNum<0){
        reversed=-reversed;
    }
    printf("Reversed number is: %d\n", reversed);

    return 0;
}