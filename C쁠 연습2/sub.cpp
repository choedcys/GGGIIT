#include<iostream>
#include"header.h"
using namespace std;
Charity::Charity(){}
Charity::Charity(string temp1, int temp2) {
	name = temp1;
	money = temp2;
	donate = 0;
}
void Charity::setdonate(int temp) {
	donate += temp;
}
string Charity::getname() {
	return name;
}
int Charity::getmoney() {
	return money - donate;
}
int Charity::getdonate() {
	return donate;
}
Ctrl::Ctrl() {
	arr[0] = new Charity("철이", 100);
	arr[1] = new Charity("머털", 500);
	cout << "기부전 잔액" << endl;
	cout << arr[0]->getname() << ": " << arr[0]->getmoney()<<"  ";
	cout << arr[1]->getname() << ": " << arr[1]->getmoney() << endl;
}
int Ctrl::Give() {
	int temp;
	int cnt = 0;
	cout << "얼마를 기부할까요?" << endl;
	for (int i = 0; i < 2; i++) {
		cout << arr[i]->getname() << ": ";
		cin >> temp;
		if (arr[i]->getmoney()-temp >= 0) {
			arr[i]->setdonate(temp);
			cnt++;
			if (cnt == 2) {
				cout << "기부 후 잔액" << endl;
				cout << arr[0]->getname() << ": " << arr[0]->getmoney() << "  ";
				cout << arr[1]->getname() << ": " << arr[1]->getmoney() << endl;
				return 1;
			}
		}
		else {
			cout << arr[i]->getname() << "돈이 모자랍니다. "<<endl;
			return 0;
		}
	}
}

ostream& operator<<(ostream& os, Ctrl temp) {
	for (int i = 0; i < 2; i++) {
		os << temp.arr[i]->getname() << "님은 " << temp.arr[i]->getdonate() << "원 기부하셨습니다. " << endl;
	}
	return os;
}