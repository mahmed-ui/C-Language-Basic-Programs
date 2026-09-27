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

void printtables(int n);
void printfactorial(int a);
void printevenodd(int b);

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printtables(num);
    printfactorial(num);
    printevenodd(num);

    return 0;

}

void printtables(int n){
    printf("\nTable of entered number: ");
    for(int i=1;i<=10;i++){
        printf("\n %d*%d=%d",n,i,n*i);
    } 
}

void printfactorial(int a){
    int fact=1;

    for(int j=1;j<=a;j++){
        fact=fact*j;
    }
    printf("\nFactorial of entered number is %d",fact);
}

void printevenodd(int b){
    if(b%2==0){
        printf("\nEven number");
    }else{
        printf("\nOdd Number");
    }
}