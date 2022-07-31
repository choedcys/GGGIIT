#include<iostream>
using namespace std;


class Array {
	int* arr;
	int len;
public:
	Array(int temp);
	Array(Array& temp);
	bool operator==(Array temp);
	bool operator!=(Array temp);
	int& operator[](int temp);
	Array& operator=(Array& temp);
	~Array();
	friend ostream& operator<<(ostream& os, Array& temp);
};