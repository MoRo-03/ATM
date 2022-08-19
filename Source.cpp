#include<iostream>
using namespace std;

void menu()
{
	cout << "********MENU********" << endl;
	cout << "1. Check Balance" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "********************" << endl;
}

int Balance = 500;

void accountBalance()
{
	cout << "Balance: " << Balance << " $\n\n" << endl;
}

void deposit()
{
	int depositAmount = 0;
	cout << "Deposit Amount: ";
	cin >> depositAmount;
	Balance += depositAmount;
	cout << "You Have Successfully Deposited: " << depositAmount << " $ To Your Account !\n" << endl;
	cout << "Your Current Balance Is: " << Balance << " $\n" << endl;
}

void withdraw()
{
	float moneyTaken = 0;

	cout << "Your Current Balance: " << Balance << " $\n" <<  endl;
	cout << "How Much Would You Like To Withdraw: ";
	cin >> moneyTaken;

	if (moneyTaken < Balance)
	{
		Balance -= moneyTaken;
		cout << "\nYou Have Successfully Withdrew: " << moneyTaken << " $\n" << endl;
		cout << "Your Balance Now Is: " << Balance << " $\n" << endl;
	}
	else
	{
		cout << "You Have Only: " << Balance << " $" << "In Your Account, Please Try Again !";
		cout << "Press Any Key To Exit: \n\n\n\n\n";
		exit(0);
	}
}

int main()
{
	//functions used: menu, check balance, deposit, withdraw
	menu();

	int option = 0;

again:		//going back if the user enters a choice > 3

	cout << "Process Number: ";
	cin >> option;

	switch (option)
	{
	case 1: accountBalance(); goto again;break;
	case 2: deposit();break;
	case 3: withdraw();break;
	default: goto again;
	}

	system("pause>0");
}