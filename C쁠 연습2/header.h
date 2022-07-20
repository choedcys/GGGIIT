#include<iostream>
using namespace std;
class San {
private:
	char* name;
	int height;
public:
	San();
	~San();
	San& operator=(const San& br);
	char* getname();
	friend istream& operator>>(istream& is, San& temp);
	friend ostream& operator<<(ostream& os, San& temp);
	int getheight();
};