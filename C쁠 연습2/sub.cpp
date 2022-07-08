//18-2
#include<iostream>
#include"header.h"
using namespace std;
Product::Product(){}
Product::Product(string temp1, double temp2) {
	name = temp1;
	price = temp2;
}
double Product::getPrice() {
	return price;
}
void Product::print() {
	cout << "상품명 : " << name << endl;
	cout << "가 격 : " << price << endl;
}
DiscountProduct::DiscountProduct() {}
DiscountProduct::DiscountProduct(string temp1, double temp2, double temp3) {
	name = temp1;
	price = temp2;
	discount = temp3;
}

double DiscountProduct:: getPrice() {
	double drate = (100 - discount) / 100;
	return price * drate;
}