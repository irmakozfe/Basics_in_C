#include <stdio.h>
//Bank Account Management

typedef struct
{
    int accountNumber;
    float balance;
}BankAccount;

void findAccountById(BankAccount account[], int size, int accnum)
{
   for (int i = 0; i < size ; i++)
   {
       if (accnum == account[i].accountNumber)
       {
           printf("Account number is %d\n", accnum);
           printf("Account balance is %f\n", account[i].balance);
           return;
       }
   }
    printf("Account with number %D not found.\n", accnum);
}


int main()
{
BankAccount accounts[3]={{777, 3200.500},
    {888, 50000.00},
    {999, 500.00} };

    int accnum;
    printf("Enter account number: ");
    scanf("%d", &accnum);
    findAccountById(accounts, 3, accnum);
}
