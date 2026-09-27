// #include <stdio.h>

// int NumbersSum(int x,int y);

// int main(){
//     int a,b;
//     printf("Enter two numbers: ");
//     scanf("%d %d",&a, &b);
//     int sum = NumbersSum(a,b);
//     printf("The sum of two numbers is %d", sum);
//     return 0;
// }

// int NumbersSum(int x, int y){
//     return x+y;
// }

#include <stdio.h>

void tables(int n);

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    tables(num);

    return 0;

}

void tables(int n){
    for(int i=1;i<=10;i++){
        printf("%d*%d=%d \n",n,i,n*i);
    } 
}
