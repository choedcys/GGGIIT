#include<iostream>
using namespace std;

class Set {
	int arr[20];
	int cnt = -1;
public:
	Set();
	void arrange();
	Set operator+(int temp);
	Set operator-(int temp);
	Set operator&(Set temp);
	Set operator|(Set temp);
	bool operator==(Set temp);
	friend ostream& operator<<(ostream& os, Set& temp);
	friend istream& operator>>(istream& is, Set& temp);
	void display();
};