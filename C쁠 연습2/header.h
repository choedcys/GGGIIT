#include<iostream>
using namespace std;

class String {
	char* sen;
	int len;
public:
	String();
	String(char* temp1, int temp2);
	String operator+(String temp);
	bool operator!();
	bool operator==(String temp);
	bool operator!=(String temp);
	bool operator<(String temp);
	bool operator>(String temp);
	bool operator<=(String temp);
	bool operator>=(String temp);
	friend ostream& operator<<(ostream& os, String temp);
	void print();
	//<, >, <=, >= �����ڸ� �����ε� �Ͽ� �� ���� ���ڿ��� ������ ���Ѵ�.
};