// #include <stdio.h>
// int main(){
//     int current=0,requests,floor;
//     printf("Enter number of requests: ");
//     scanf("%d", &requests);
//     for(int i=1;i<=requests;i++){
//         printf("Enter floor number: \n");
//         scanf("%d", &floor);
//         if(floor>current){
//             printf("Moving up \n");
//         } else if(floor<current){
//             printf("Moving down \n");
//         } else{
//             printf("Doors opening \n");
//         }
//         current=floor;
//     }
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h> /* for abs() */

int main() {
    int current = 0, requests, floor, totalDistance = 0;

    printf("Enter number of requests: ");
    if (scanf("%d", &requests) != 1 || requests <= 0) {
        printf("Invalid number of requests.\n");
        return 1;
    }

    for (int i = 1; i <= requests; i++) {
        printf("Enter floor number: ");

        if (scanf("%d", &floor) != 1) {
            printf("Invalid input. Skipping request.\n");
            /* clear bad input from the buffer so the loop doesn't get stuck */
            while (getchar() != '\n');
            continue;
        }

        if (floor < 0) {
            printf("Invalid floor number. Skipping request.\n");
            continue;
        }

        if (floor > current) {
            printf("Moving up from floor %d to %d\n", current, floor);
        } else if (floor < current) {
            printf("Moving down from floor %d to %d\n", current, floor);
        } else {
            printf("Already at floor %d. Doors opening.\n", floor);
        }

        totalDistance += abs(floor - current);
        current = floor;
    }

    printf("\nFinal floor: %d\n", current);
    printf("Total distance traveled: %d floor(s)\n", totalDistance);

    return 0;
}

