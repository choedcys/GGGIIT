//18-2
#include<iostream>
using namespace std;

class Product {
protected:
	string name;
	double price;
public:
	Product();
	Product(string temp1, double temp2);
	virtual double getPrice();
	void print();
};
class DiscountProduct : public Product {
private:
	double discount;
public:
	DiscountProduct();
	DiscountProduct(string temp1, double temp2, double temp3);
	virtual double getPrice();
};