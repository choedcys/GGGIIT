#include<iostream>
using namespace std;
template<typename Bread>
Bread bigger(Bread temp1, Bread temp2) {
	if (temp1 > temp2)
		return temp1;
	else if (temp1 == temp2)
		return 0;
	else
		return temp2;
}

int main() {
	int a = 20, b = 50;
	char c = 'a', d = 'z';
	cout << "bigger(20, 50)의 결과는 " << bigger(a, b) << endl;
	cout << "bigger('a', 'z')의 결과는 " << bigger(c, d) << endl;
}