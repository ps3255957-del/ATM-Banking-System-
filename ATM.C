#include <stdio.h>

int main() {
    int pin, choice;
    float balance = 5000, amount;
    printf("===== ATM BANKING SYSTEM =====\n");
    printf("Enter PIN: ");
    scanf("%d", &pin);
    if (pin != 1234) {
        printf("Invalid PIN!\n");
        return 0;
    }
    do {
        printf("\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Balance: Rs. %.2f\n", balance);
                break;
            case 2:
                printf("Enter amount: ");
                scanf("%f", &amount);
                if (amount > 0) { balance += amount; printf("Deposit successful!\n"); }
                else printf("Invalid amount!\n");
                break;
            case 3:
                printf("Enter amount: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) { balance -= amount; printf("Withdrawal successful!\n"); }
                else printf("Invalid amount or low balance!\n");
                break;
            case 4:
                printf("Thank you for using ATM!\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);
    return 0;
}