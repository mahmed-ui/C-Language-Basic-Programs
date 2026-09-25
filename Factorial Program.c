#include <stdio.h>

int main(){
    int i,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        printf("%d! = ",i);
        int fact=1;
        for(int j=1;j<=i;j++){
            fact=fact*j;
        }
        printf("%d\n",fact);
    }
    return 0;
}
