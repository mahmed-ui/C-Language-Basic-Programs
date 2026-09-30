#include <stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int b=a&1;
    printf("Result: %d",b);
    return 0;
}