#include<iostream>
using namespace std;

class MyString {
private:
	char* str;
	int len;
public:
	MyString();
	MyString(MyString& br);
	~MyString();
	MyString& operator+(MyString& br);
	bool operator>(MyString& br);
	friend ostream& operator<<(ostream& os, MyString& temp);
	friend istream& operator>>(istream& is, MyString& temp);
};