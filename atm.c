#include <stdio.h>

int main() {
    // Initial balance
    float balance = 1000.0;
    
    // ATM PIN
    int pin = 1234;
    
    // User input for PIN
    int enteredPin;
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    // PIN verification
    if (enteredPin != pin) {
        printf("Invalid PIN. Exiting...\n");
        return 1; // Exit with an error code
    }

    // Options menu
    int choice;
    do {
        printf("\n1. Check Balance\n");
        printf("2. Withdraw\n");
        printf("3. Deposit\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your balance: $%.2f\n", balance);
                break;
                
            case 2:
                // Withdrawal
                float withdrawAmount;
                printf("Enter the amount to withdraw: $");
                scanf("%f", &withdrawAmount);

                if (withdrawAmount > balance) {
                    printf("Insufficient funds\n");
                } else {
                    balance -= withdrawAmount;
                    printf("Withdrawal successful. Remaining balance: $%.2f\n", balance);
                }
                break;
                
            case 3:
                // Deposit
                float depositAmount;
                printf("Enter the amount to deposit: $");
                scanf("%f", &depositAmount);

                balance += depositAmount;
                printf("Deposit successful. Updated balance: $%.2f\n", balance);
                break;
                
            case 4:
                printf("Exiting...\n");
                break;
                
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0; // Exit with success code
}
