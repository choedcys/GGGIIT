#include <iostream>
#include"header.h"
using namespace std;


int main()
{
	Time start(1, 0, 0);
	cout << "end = start + 1000" << endl;
	Time end = start + 1000; // 1000ÃÊ ÈÄ
	end.display();
	cout << "end = end - 500" << endl;
	end = end - 500;
	end.display();
	bool temp = start < end;
	cout << "start < end : " << temp << endl;
	temp = start > end;
	cout << "start > end : " << temp << endl;
	Time t;
	cout << "cin>> ";
	cin >> t;
	cout << "cout<< ";
	t.display();
	return 0;
}