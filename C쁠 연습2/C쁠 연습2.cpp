//18-2
#include<iostream>
#include"header.h"
using namespace std;

int main()
{
	SavingAcc sa(1000000);
	CheckingAcc ca(1000000);
	sa.deposit(800000);
	ca.deposit(5500000);
	sa.withdraw(300000);
	ca.withdraw(1500000);
	sa.print();
	cout << "���ھ� : " << sa.getinterest() << endl;
	ca.print();
	cout << "���ھ� : " << ca.getinterest() << endl;
	return 0;
}