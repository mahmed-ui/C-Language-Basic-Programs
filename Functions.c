// basic C program to demonstrate the use of functions

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
// Table, Factorial and Even Odd Programs using Functions

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

//Area of Shapes Program using Functions

#include <stdio.h>
#include <math.h>

void areaSquare(float size);
void areaRectangle(float sideA, float sideB);
void areaCircle(float radius);

int main(){
    
    int shape;
    
    printf("Enter shape (1=Square) (2=Rectangle) (3=Circle) : ");
    
    scanf("%d", &shape);
    switch(shape){
        case 1:
        printf("\nEnter length of the side: ");
        float size;
        scanf("%f", &size);
        areaSquare(size);
        break;

        case 2:
        printf("\nEnter length of the both sides: ");
        float sizeA,sizeB;
        scanf("%f %f", &sizeA,&sizeB);
        areaRectangle(sizeA,sizeB);
        break;

        case 3:
        printf("\nEnter radius of the circle: ");
        float radius;
        scanf("%f",&radius);
        areaCircle(radius);
        break;

        default:
        printf("\nInvalid shape");

    }
    return 0;

}

void areaSquare(float size){
    printf("Area of a Square is %.2f",pow(size,2));
}

void areaRectangle(float sideA, float sideB){
    printf("Area of a Rectangle is %.2f",sideA*sideB);
}

void areaCircle(float radius){
    printf("Area of a Circle is %.2f",3.14*pow(radius,2));
}

