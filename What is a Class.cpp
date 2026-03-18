#include <iostream>
using namespace std;

class BankAccount
{
private:
	float balance;

public:
	void deeposit(float amount)
	{
		balance += amount;
	}

	void show()
	{
		cout << "Balance: " << balance << endl;
	}
};

int main()
{
	BankAccount acc;

	acc.deeposit(500);
	acc.show();

	return 0;
}

