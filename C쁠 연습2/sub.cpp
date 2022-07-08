//18-5
#include<iostream>
#include"header.h"
using namespace std;

void LoopAdder::read() {
	cout << name << ":" << endl;
	cout << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요 >> ";
	cin >> x >> y;
}
void LoopAdder::write() {
	cout << x << "에서 " << y << "까지의 합 = " << sum << " 입니다" << endl;
}
void LoopAdder::run() {
	read();
	sum = calculate();
	write();
}
LoopAdder::LoopAdder(string temp = "") {
	this->name = temp;
}
int LoopAdder::getX() { return x; }
int LoopAdder::getY() { return y; }

ForLoopAdder::ForLoopAdder(string temp) : LoopAdder(temp) {}
int ForLoopAdder::calculate() {
	int sum = 0, temp1 = getX();
	while (1) {
		sum += temp1;
		temp1++;
		if (temp1 == getY() + 1)
			break;
	}
	return sum;
};