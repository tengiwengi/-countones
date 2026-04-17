#include <stdio.h>

int main() {
    char UserYN;
    int UserNumber;
    int count = 0;

    printf("Welcome to the CountOnes program\n");

    do {
        count = 0;

        printf("Please enter a number: \n");
        scanf("%d", &UserNumber);

        while (UserNumber != 0) {
            int digit = UserNumber % 10;
            UserNumber /= 10;
            if (digit == 1) {
                count++;
            }
        }

        printf("The number of ones is: %d\n", count);

        printf("Continue (y/n)?: ");
        scanf(" %c", &UserYN);

    } while (UserYN == 'y');

    printf("Exiting.\n");
    return 0;
}