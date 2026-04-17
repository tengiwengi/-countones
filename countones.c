#include <stdio.h>

int main(){

    int UserNumber;
    int count = 0;
    
    printf("Welcome to the CountOnes program");
    printf("Please enter a number: \n");
    scanf("%d", &UserNumber);

    while(UserNumber != 0){
        int digit = UserNumber % 10;
        UserNumber /= 10;
        if (digit == 1){
            count ++;
        }
    }
    
    printf("The number of bits set is : %d\n", count);

    char UserYN;
    printf("Continue (y/n)?:");
    if (UserYN == 'y')
    retyurn
        

    return 0;
} 