// 10. ATM Transaction System
#include <stdio.h>

int main()
{
    float balance = 0;
    float amount;

    int choice;
    int i;
    int count = 0;

    char transaction[5][50];

    do
    {
        printf("\n\n----- ATM -----\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Last Five Transactions\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("Balance = %.2f", balance);

                break;

            case 2:

                printf("Enter amount: ");
                scanf("%f", &amount);

                if(amount > 0)
                {
                    balance = balance + amount;

                    sprintf(transaction[count % 5],
                            "Deposited %.2f", amount);

                    count++;

                    printf("Money deposited.");
                }
                else
                {
                    printf("Invalid amount.");
                }

                break;

            case 3:

                printf("Enter amount: ");
                scanf("%f", &amount);

                if(amount > balance)
                {
                    printf("Insufficient balance.");
                }
                else if(amount <= 0)
                {
                    printf("Invalid amount.");
                }
                else
                {
                    balance = balance - amount;

                    sprintf(transaction[count % 5],
                            "Withdrawn %.2f", amount);

                    count++;

                    printf("Money withdrawn.");
                }

                break;

            case 4:

                printf("\nLast Five Transactions:\n");

                if(count == 0)
                {
                    printf("No transactions.");
                }
                else
                {
                    int start;

                    if(count > 5)
                        start = count - 5;
                    else
                        start = 0;

                    for(i = start; i < count; i++)
                    {
                        printf("%s\n",
                               transaction[i % 5]);
                    }
                }

                break;

            case 5:

                printf("Thank you for using ATM.");

                break;

            default:

                printf("Invalid choice.");
        }

    } while(choice != 5);

    return 0;
}