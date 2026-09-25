//FizzBuzz variant
/* Print numbers 1 to 100. For multiples of 3 print "Fizz", multiples of 5 print "Buzz", 
multiples of both print "FizzBuzz", multiples of 7 also append "Bang" (so a number divisible 
by 3, 5, and 7 prints "FizzBuzzBang"). Otherwise print the number. */

#include <stdio.h>

int main(){
    
    int i;
    
    for(i=1; i<=100; i++){
        if(i%3==0 && i%5==0 && i%7==0){
            printf("FizzBuzzBangg\n");
        }else if(i%3==0 && i%5==0){
            printf("FizzBuzz\n");
        }else if(i%3==0 && i%7==0){
            printf("FizzBang\n");
        }else if(i%5==0 && i%7==0){
            printf("BuzzBang\n");
        }else if(i%3==0){
            printf("Fizz\n");
        }else if(i%5==0){
            printf("Buzz\n");
        }else if(i%7==0){
            printf("Bang\n");
        }else{
            printf("%d\n",i);
        }
    }
    printf("%d",i);
    return 0;

}