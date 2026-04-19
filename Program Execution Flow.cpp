#include <iostream>
using namespace std;

class BankAccount
{
private:
	float balance;

public:
	void setBalance(float bal);
	float getBalance();
};

void BankAccount::setBalance(float bal)
{
	if(bal >= 0)
		balance = bal;
	
}

float BankAccount::getBalance()
{
	return balance;
}


int main()
{
	BankAccount account;

	account.setBalance(500);

	cout << "Balance: " << account.getBalance() << endl;

	return 0;
}

