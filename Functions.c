#include <stdio.h>

int NumbersSum(int x,int y);

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a, &b);
    int sum = NumbersSum(a,b);
    printf("The sum of two numbers is %d", sum);
    return 0;
}

int NumbersSum(int x, int y){
    return x+y;
}

