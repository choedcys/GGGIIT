//18-1
#include<iostream>
#include"header.h"
using namespace std;

WonToDollar::WonToDollar(double temp) {
		ratio = temp;
}

void WonToDollar:: run() {
	double money;
	cout << "���� �޷��� �ٲߴϴ�. ���� �Է��ϼ���: ";
	cin >> money;
	cout<<"��ȯ���: "<<convert(money);
}
double WonToDollar::convert(double src){
	return src / ratio;
};