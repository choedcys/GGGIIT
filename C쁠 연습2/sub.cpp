#include <iostream>
#include"header.h"
using namespace std;

Number::Number(int n) : num(n) { }
void Number::showData() { cout << num << endl; }
Number* Number::operator->() {
	return this;
}
Number& Number::operator*() {
	return *this;
}