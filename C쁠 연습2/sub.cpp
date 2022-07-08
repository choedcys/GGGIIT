//18-1
#include<iostream>
#include"header.h"
using namespace std;

WonToDollar::WonToDollar(double temp) {
		ratio = temp;
}

void WonToDollar:: run() {
	double money;
	cout << "원을 달러로 바꿉니다. 원을 입력하세요: ";
	cin >> money;
	cout<<"변환결과: "<<convert(money);
}
double WonToDollar::convert(double src){
	return src / ratio;
};