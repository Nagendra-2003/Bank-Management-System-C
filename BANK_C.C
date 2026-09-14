#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct Account
{
    int accNo;
    char name[50];
    float balance;
};
struct Account bank[100];
int totalAccounts = 0;


void createAccount()
{
    printf("\n\t--- Create New Account ---\n");
    printf("\tEnter Account Number: ");
    scanf("%d", &bank[totalAccounts].accNo);
    fflush(stdin);
    printf("\n\tEnter Account Holder Name: ");
    gets(bank[totalAccounts].name); // Naam jisme space ho

    printf("\n\tEnter Initial Amount: ");
    scanf("%f", &bank[totalAccounts].balance);

    totalAccounts++;
    printf("\n\tAccount Created Successfully!\n");
}


void deposit()
{
    int acc, i, found = 0;
    float amount;
    printf("\n\t--- Deposit Money ---\n");
    printf("\tEnter Account Number: ");
    scanf("%d", &acc);

    for(i = 0; i < totalAccounts; i++)
    {
	if(bank[i].accNo == acc)
	{
	    printf("\tEnter Amount to Deposit: ");
	    scanf("%f", &amount);
	    bank[i].balance += amount;
	    printf("\n\tDeposit Successful! Current Balance: Rs. %.2f\n", bank[i].balance);
	    found = 1;
	    break;
	}
    }
	if(found==0)
	{
	printf("\n\tAccount Not Found!\n");
	}
}
void withdrawal()
{
	int  i,acc,found=0;
	float amount;
	printf("\tEnter Account Number");
	scanf("%d",& acc);
	for(i = 0; i < totalAccounts; i++)
	{
	     if(bank[i].accNo == acc)
	     {
	      printf("\tEnter Amount to withdrawl");
	      scanf("%f",& amount);
	      bank[i].balance-=amount;
	      printf("\n\tWithdrawal Successfully ! Current balance is :%.2f" , bank[i].balance);
	      found=1;
	      break;
	     }
	}
	if(found==0)
	{
	printf("\n\t Account not found!");
	}
 }



void displayAll()
{
    int i;
    printf("\n\t--- All Accounts Details ---\n");
    printf("\tAcc No. \tName \t\tBalance\n");
    printf("\t--------------------------------------\n");
    for(i = 0; i < totalAccounts; i++)
    {
	printf("\t%d      \t%s   \t\t%.2f\n", bank[i].accNo, bank[i].name, bank[i].balance);
    }
}

void main()
{
    int choice;
    while(1) {
	clrscr(); // Turbo C me purani screen clear karne ke liye

	printf("\n\t\tBANK MANAGEMENT SYSTEM\n");
	printf("\t\t======================\n");
	printf("\t1. Create New Account\n");
	printf("\t2. Deposit Money\n");
	printf("\t3. Withdrawal Money\n");
	printf("\t4. View All Accounts\n");
	printf("\t5. Exit\n");
	printf("\n\tSelect an option (1-5): ");
	scanf("%d", &choice);

	switch(choice)
	{
	    case 1:
		createAccount();
		break;
	    case 2:
		deposit();
		break;
	    case 3:
		withdrawal();
		break;
	    case 4:
		displayAll();
		break;
	    case 5:
		exit(0);
	    default:
		printf("\n\tInvalid Option! Please try again.\n");
	}

	printf("\n\tPress any key to go back to main menu...");
	getch();
    }
}
