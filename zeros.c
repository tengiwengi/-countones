#include <stdio.h>

int main() {
    char UserYN;
    int UserNumber;
    int count = 0;

    printf("Welcome to the Zeroes program\n");

    do {
        count = 0;

        printf("Please enter a number: \n");
        scanf("%d", &UserNumber);

        if (UserNumber == 0){
            printf("32\n");
            
        } else {
        while(!(UserNumber & (~__INT_MAX__))){

            count++;
            UserNumber <<= 1;
        }
        
        printf("The number of leading zeros is: %d\n", count);

    }

        printf("Continue (y/n)?: ");
        scanf(" %c", &UserYN);

    } while (UserYN == 'y');

    printf("Exiting\n");
    return 0;
}