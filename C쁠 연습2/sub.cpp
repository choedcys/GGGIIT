//18-2
#include<iostream>
#include"header.h"
using namespace std;
void BankAcc:: deposit(double temp) {
	money += temp;
}
double BankAcc::withdraw(double temp) {
	money -= temp;
	return money;
}

SavingAcc::SavingAcc() {}
SavingAcc::SavingAcc(double temp) {
	money = temp;
	rate = 9.0;
}
double SavingAcc::getinterest() {
	interest = money * (rate/100);
	return interest;
}
void SavingAcc::print() {
	cout << "---���࿹�� ����" << endl;
	cout << "���ݾ�: " << money;
}
CheckingAcc::CheckingAcc() {}
CheckingAcc::CheckingAcc(double temp) {
	money = temp;
	rate = 5.0;
}
double CheckingAcc::getinterest() {
	interest = money * (rate / 100);
	return interest;
}
void CheckingAcc::print() {
	cout << "---���¿��� ����" << endl;
	cout << "���ݾ�: " << money;
}