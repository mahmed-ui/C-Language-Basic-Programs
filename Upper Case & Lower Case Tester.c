#include <stdio.h>
int main(){
    char chr;
    printf("Enter an alphabet: ");
    scanf("%c", &chr);
    if(chr>='a' && chr<='z'){
        printf("Lowercase");
    } else if(chr>='A' && chr<='Z'){
        printf("Uppercase");
    } else{
        printf("Not an alphabet");
    }
    return 0;
}

