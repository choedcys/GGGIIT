#include<iostream>
#include"header.h"
using namespace std;

int main() {
	Time a, b(3, 45);
	cout << "# a�� �ð� �Է� : ";
	cin >> a;
	Time temp = a + b;
	cout << "a�� �ð� => " << a << endl;
	cout << "b�� �ð� => " << b << endl;
	cout << "a + b => " << temp << endl;
	cout << "a + 1.5 => " << a + 1.5 << endl;
	cout << "1.5 + b => " << 1.5 + b << endl;
}