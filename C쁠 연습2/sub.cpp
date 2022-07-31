#include <iostream>
#include"header.h"
using namespace std;

Array::Array(int temp) {
	len = temp;
	arr = new int[len];
	for (int i = 0; i < len; i++) {
		arr[i] = 0;
	}
}
Array::Array(Array& temp) {
	this->len = temp.len;
	this->arr = new int[len];
	for (int i = 0; i < len; i++) {
		this->arr[i] = temp.arr[i];
	}
}

bool Array::operator==(Array temp) {
	if (this->len == temp.len) {
		for (int i = 0; i < len; i++) {
			if (this->arr[i] != temp.arr[i])
				return false;
		}
		return true;
	}
	else
		return false;
}

bool Array::operator!=(Array temp) {
	if (this->len == temp.len) {
		for (int i = 0; i < len; i++) {
			if (this->arr[i] != temp.arr[i])
				return true;
		}
		return false;
	}
	else
		return true;
}

int& Array::operator[](int temp) {
	if (temp<0 || temp>len) {
		cout << "범위를 벗어남" << endl;
	}
	return arr[temp];
}

Array& Array::operator=(Array& temp) {
	this->len = temp.len;
	this->arr = new int[len];
	for (int i = 0; i < len; i++) {
		this->arr[i] = temp.arr[i];
	}
	return *this;
}

Array::~Array() {
	delete[]arr;
}

ostream& operator<<(ostream& os, Array& temp) {
	for (int i = 0; i < temp.len; i++) {
		os << temp.arr[i] << " ";
	}
	return os;
}