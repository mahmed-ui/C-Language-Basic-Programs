#include <stdio.h>
#include <string.h>

int main() {
    int N;
    float totalRevenue = 0.0;

    printf("Enter number of guests: ");
    scanf("%d", &N);

    for (int guest = 1; guest <= N; guest++) {
        char season[20];
        char roomType[20];
        int nights;
        float rate = 0.0, total = 0.0, discount = 0.0;

        printf("\n--- Guest %d ---\n", guest);

        printf("Enter season (Peak/Off-Peak): ");
        scanf("%19s", season);

        printf("Enter room type (Standard/Deluxe/Suite): ");
        scanf("%19s", roomType);

        printf("Enter number of nights: ");
        scanf("%d", &nights);

        /* Nested pricing logic */
        if (strcmp(season, "Peak") == 0) {
            if (strcmp(roomType, "Standard") == 0) {
                rate = 5000;
            } else if (strcmp(roomType, "Deluxe") == 0) {
                rate = 8000;
            } else if (strcmp(roomType, "Suite") == 0) {
                rate = 12000;
            } else {
                printf("Invalid room type. Skipping guest.\n");
                continue;
            }
        } else if (strcmp(season, "Off-Peak") == 0) {
            if (strcmp(roomType, "Standard") == 0) {
                rate = 3000;
            } else if (strcmp(roomType, "Deluxe") == 0) {
                rate = 5000;
            } else if (strcmp(roomType, "Suite") == 0) {
                rate = 8000;
            } else {
                printf("Invalid room type. Skipping guest.\n");
                continue;
            }
        } else {
            printf("Invalid season. Skipping guest.\n");
            continue;
        }

        total = rate * nights;

        /* Long-stay discount, independent of season */
        if (nights > 7) {
            discount = total * 0.15;
            total = total - discount;
        }

        printf("Price for Guest %d: Rs. %.2f\n", guest, total);

        totalRevenue += total;
    }

    printf("\nHotel Total Revenue: Rs. %.2f\n", totalRevenue);

    return 0;
}