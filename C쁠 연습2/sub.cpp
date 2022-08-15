#include <iostream>
#include"header.h"
using namespace std;


Set::Set(){}
void Set::arrange() {
	int temp;
	for (int row = 0; row < cnt; row++) {
		for (int col = row; col < cnt; col++) {
			if (arr[row] > arr[col]) {
				temp = arr[row];
				arr[row] = arr[col];
				arr[col] = temp;
			}
		}
	}
}
Set Set::operator+(int temp) {
	for (int i = 0; i < cnt+1; i++) {
		if (temp == arr[i]) {
			cout << "중복입니다." << endl;
			return *this;
		}
	}
	arr[++cnt] = temp;
	arrange();
	return *this;
}
Set Set::operator-(int temp) {
	int i;
	for (i = 0; i < cnt+1; i++) {
		if (temp == arr[i])
			break;
	}
	for (int j = i; j < cnt+1; j++) {
		arr[j] = arr[j + 1];
	}
	cnt--;
	arrange();
	return *this;
}
Set Set::operator&(Set temp) {
	Set res;
	for (int row = 0; row < this->cnt+1; row++) {
		for (int col = 0; col < temp.cnt+1; col++) {
			if (this->arr[row] == temp.arr[col])
				res.arr[++res.cnt] = temp.arr[col];
		}
	}
	return res;
}
Set Set::operator|(Set temp) {
	Set res;
	Set complex = *this & temp;
	bool find = true;
	//1. this와 교집합을 분석하여 차집합을 res에 저장
	//2. res에 temp를 모두저장
	for (int row = 0; row < this->cnt + 1; row++) {
		for (int col = 0; col < complex.cnt + 1; col++) {
			if (this->arr[row] == complex.arr[col]) {
				find = false;
			}
		}
		if (find == true) {
			res + this->arr[row];
		}
		else{}
		find = true;
	}
	for (int i = 0; i < temp.cnt + 1; i++) {
		res + temp.arr[i];
	}
	return res;
}

bool Set::operator==(Set temp) {
	this->arrange();
	temp.arrange();
	if (this->cnt == temp.cnt) {
		for (int i = 0; i < this->cnt; i++) {
			if (this->arr[i] != temp.arr[i])
				return false;
		}
		return true;
	}
	else
		return false;
}
void Set::display() {
	cout << "{";
	for (int i = 0; i < cnt+1; i++) {
		cout << arr[i];
		if(i != cnt)
			cout << ",";
	}
	cout << "}"<<endl;
}

ostream& operator<<(ostream& os, Set& temp) {
	os << "{";
	for (int i = 0; i < temp.cnt + 1; i++) {
		os << temp.arr[i];
		if (i != temp.cnt)
			os << ",";
	}
	os << "}" << endl;
	return os;
}

istream& operator>>(istream& is, Set& temp) {
	int t;
	is >> t;
	for (int i = 0; i < temp.cnt + 1; i++) {
		if (t == temp.arr[i]) {
			cout << "중복입니다." << endl;
			return is;
		}
	}
	temp.arr[++temp.cnt] = t;
	temp.arrange();
	return is;
}