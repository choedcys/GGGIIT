#include<iostream>
#include"header.h"
using namespace std;

MyString::MyString(){
	str = NULL;
}

MyString::MyString(MyString& br){}
MyString::~MyString(){}
MyString& MyString::operator+(MyString& br){
	strcat(this->str, br.str);
	this->len += br.len;
	return *this;
}
bool MyString::operator>(MyString& br){
	cout << "첫 번째와 두 번째 중 긴 과일이름: ";
	if (this->len > br.len) {
		return true;
	}
	else {
		return false;
	}
}

ostream& operator<<(ostream& os, MyString& temp){
	os << temp.str <<"("<<temp.len<<")"<< endl;
	return os;
}
istream& operator>>(istream& is, MyString& temp){
	char buffer[50];
	is >> buffer;
	temp.str = new char[strlen(buffer) + 1];
	strcpy(temp.str, buffer);
	temp.len = strlen(temp.str);
	return is;
}