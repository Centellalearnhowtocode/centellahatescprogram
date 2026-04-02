#include <stdio.h>

int main() {
    int option;
    printf("===== ATM MENU =====\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &option);

    switch(option) {
        case 1:
            printf("Your balance is $1000\n");
            break;
        case 2:
            printf("Deposit function selected.");
            break;
        case 3:
            printf("\nWithdraw function selected.");
            break;
        case 4:
            printf("\nThank you for using our ATM.");
            break;
        default:
            printf("\nInvalid option.");
            break;
    }
    return 0;
}

