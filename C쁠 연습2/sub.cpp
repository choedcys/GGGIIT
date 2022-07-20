#include<iostream>
#include"header.h"
using namespace std;

San::San() {
	this->name = new char[2];
	this->height = 0;
}
San& San::operator=(const San& br) {
	this->name = new char[strlen(br.name) + 1];
	strcpy(name, br.name);
	this->height = br.height;
	return *this;
}

San::~San() {
	cout << name << "소멸자" << endl;
	delete[]name;
}
char* San::getname() {
	return name;
}
int San::getheight() {
	return height;
}




istream& operator>>(istream& is, San& temp) {
	char name[50];
	int height;
	cout << "이름: ";
	is >> name;
	temp.name = new char[strlen(name) + 1];
	strcpy(temp.name, name);
	cout << "높이: ";
	is >> height;
	temp.height = height;
	return is;
}
ostream& operator<<(ostream& os, San& temp) {
	os << "이름: " << temp.name << endl << "높이: " << temp.height << endl;
	return os;
}