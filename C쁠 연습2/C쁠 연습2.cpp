#include<iostream>
#include"header.h"
using namespace std;

int main() {
	Time a, b(3, 45);
	cout << "a의 시간 입력 : ";
	cin >> a;
	cout << "a의 시간 => " << a << endl;
	cout << "b의 시간 => " << b << endl;
	cout << "a + b => " << a+b << endl;
	cout << "a + 1.5 => " << a + 1.5 << endl;
	cout << "1.5 + b => " << 1.5 + b << endl;
}