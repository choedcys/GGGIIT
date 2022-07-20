#include<iostream>
using namespace std;
class Charity {
private:
	string name;
	int money;
	int donate;
public:
	Charity();
	Charity(string temp1, int temp2);
	void setdonate(int temp);
	string getname();
	int getmoney();
	int getdonate();
};

class Ctrl {
	Charity *arr[2];
public:
	Ctrl();
	int Give();
	friend ostream& operator<<(ostream& os, Ctrl temp);
};