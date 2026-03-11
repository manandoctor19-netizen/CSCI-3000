#include <iostream>
#include <String>
using namespace std;

enum TransactionType
{
	Deposit,
	Withdraw,
	CheckBalance,
	Exit
};

int main()
{
	string user_input;
	TransactionType transaction;

	cout << "Enter transaction (Deposit / Withdraw / CheckBalance / Exit): ";
	cin >> user_input;

	if (user_input == "Deposit")
		transaction = Deposit;
	else if (user_input == "Withdraw")
		transaction = Withdraw;
	else if (user_input == "CheckBalance")
		transaction = CheckBalance;
	else if (user_input == "Exit")
		transaction = Exit;
	else
	{
		cout << "Invaild Input!";
		return 0;
	}

	switch (transaction)
	{
	case Deposit:
		cout << "Opening deposit process...";
		break;
	case Withdraw:
		cout << "Opening withdrawal process...";
		break;
	case CheckBalance:
		cout << "Displaying current balance...";
		break;
	case Exit:
		cout << "Thank you! Exiting ATM.";
		break;
	}

	return 0;
}


