#include <iostream>
#include"header.h"
using namespace std;


String::String(){
	len = 0;
	sen = NULL;
}
String::String(char* temp1, int temp2) {
	len = temp2;
	sen = new char[len + 1];
	strcpy(sen, temp1);
}
String String:: operator+(String temp) {
	String ret;
	ret.len = temp.len + this->len;
	ret.sen = new char[ret.len + 1];
	strcpy(ret.sen, this->sen);
	strcat(ret.sen, temp.sen);
	return ret;
}
bool String::operator!() {
	for (int i = 0; i < len; i++) {
		if (sen[i] != ' ')
			return false;
	}
	return true;
}
bool String::operator==(String temp) {
	if (this->len == temp.len) {
		for (int i = 0; i < this->len; i++) {
			if (this->sen[i] != temp.sen[i])
				return false;
		}
		return true;
	}
	else
		return false;
}
bool String::operator!=(String temp) {
	if (this->len == temp.len) {
		for (int i = 0; i < this->len; i++) {
			if (this->sen[i] != temp.sen[i])
				return true;
		}
		return false;
	}
	else
		return true;
}
bool String::operator<(String temp) {
	int i = 0;
	while (1) {
		if (i == this->len || i == temp.len)
			return false;
		if (this->sen[i] < temp.sen[i])
			return true;
		else if (this->sen[i] > temp.sen[i])
			return false;
		else{}
		i++;
	}
}
bool String::operator>(String temp) {
	int i = 0;
	while (1) {
		if (i == this->len || i == temp.len)
			return false;
		if (this->sen[i] > temp.sen[i])
			return true;
		else if (this->sen[i] < temp.sen[i])
			return false;
		else {}
		i++;
	}
}
bool String::operator<=(String temp) {
	int i = 0;
	while (1) {
		if (i == this->len || i == temp.len)
			return false;
		if (this->sen[i] <= temp.sen[i])
			return true;
		else
			return false;
		i++;
	}
}
bool String::operator>=(String temp) {
	int i = 0;
	while (1) {
		if (i == this->len || i == temp.len)
			return false;
		if (this->sen[i] >= temp.sen[i])
			return true;
		else
			return false;
		i++;
	}
}
void String::print() {
	cout << sen << endl;
}


ostream& operator<<(ostream& os, String temp) {
	os << temp.sen;
	return os;
}