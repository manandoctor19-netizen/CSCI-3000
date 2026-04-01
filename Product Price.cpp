#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
	string product_name;
	float product_price;

public:
	void setProduct(string product_name, float product_price)
	{
		this->product_name = product_name;
		this->product_price = product_price;
	}

	void displayProduct()
	{
		cout << "Product Name: " << product_name << endl;
		cout << "Product Price:" << product_price << endl;
	}
};

int main()
{
	Product product_object;

	string input_name;
	float input_price;

	cout << "Enter product name: ";
	getline(cin, input_name);

	cout << "Enter product price: ";
	cin >> input_price;

	product_object.setProduct(input_name, input_price);

	product_object.displayProduct();

	return 0;
}


