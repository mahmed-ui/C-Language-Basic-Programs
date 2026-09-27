//Print Hello World 5 times using recursion

#include <stdio.h>
void printHW(int count);
void printHW(int count){
    if (count==0){
        return;
    }
    printf("Hello World\n");
    printHW(count-1);
}

int main(){
    printHW(5);
    
}