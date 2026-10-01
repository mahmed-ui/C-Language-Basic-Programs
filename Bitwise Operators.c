// #include <stdio.h>
// int main(){
//     int a;
//     printf("Enter a number: ");
//     scanf("%d",&a);
//     int b=a&1;
//     printf("Result: %d",b);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     unsigned int num;
//     int count = 0;

//     printf("Enter a number: ");
//     scanf("%u", &num);

//     while (num != 0) { // 
//         if (num & 1) {
//             count++;
//         }
//         num >>= 1; 
//     }

//     printf("Number of appliances that are ON: %d\n", count);
//     return 0;
// }

// Write a C program t set nth bit of a number to 1 using bitwise operators.

#include <stdio.h>

int main() {
    unsigned int num, n;

    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Enter the position of the bit to set (0-indexed): ");
    scanf("%u", &n);

    // Set the nth bit to 1
    num |= (1 << n);

    printf("Number after setting the %uth bit: %u\n", n, num);
    return 0;
}

