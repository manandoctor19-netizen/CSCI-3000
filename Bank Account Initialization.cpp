#include <iostream>
using namespace std;

class BankAccount
{
private:
	float balance;

public:
	BankAccount(float bal);

	void displayBalance();
};

BankAccount::BankAccount(float bal)
{
	balance = bal;
}

void BankAccount::displayBalance()
{
	cout << balance << endl;
}

int main()
{
	BankAccount account_a(500);
	BankAccount account_b(1200);
	BankAccount account_c(50);

	cout << "Account A Balance: ";
	account_a.displayBalance();

	cout << "Account  Balance: ";

}


