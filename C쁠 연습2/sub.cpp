//18-5
#include<iostream>
#include"header.h"
using namespace std;

void LoopAdder::read() {
	cout << name << ":" << endl;
	cout << "ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ��� >> ";
	cin >> x >> y;
}
void LoopAdder::write() {
	cout << x << "���� " << y << "������ �� = " << sum << " �Դϴ�" << endl;
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