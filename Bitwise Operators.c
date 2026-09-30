// #include <stdio.h>
// int main(){
//     int a;
//     printf("Enter a number: ");
//     scanf("%d",&a);
//     int b=a&1;
//     printf("Result: %d",b);
//     return 0;
// }

#include <stdio.h>

int main() {
    unsigned int num;
    int count = 0;

    printf("Enter a number: ");
    scanf("%u", &num);

    while (num != 0) {
        if (num & 1) {
            count++;
        }
        num >>= 1; 
    }

    printf("Number of appliances that are ON: %d\n", count);
    return 0;
}
