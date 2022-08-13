#include <iostream>
#include"header.h"
using namespace std;


int main()
{
	Set A, B, C;
	cout << "집합 A의 원소는 : " << endl;
	A + 3;
	A + 4;
	A.display();
	A + 4;
	A.display();
	A - 4;
	A.display();
	A + 4;
	A.display();

	cout << "집합 B의 원소는 : " << endl;
	B + 3;
	B.display();
	B + 4;
	B.display();
	B + 5;
	B.display();
	cout << "집합 A와 B의 합집합 : " << endl;
	C = A | B;
	C.display();
	cout << "집합 A와 B의 교집합 : " << endl;
	C = A & B;
	C.display();
	cout << "집합 A와 B의 ==연산자 : " << endl;
	bool tmp = A == B;
	if (tmp == true)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	cout << "집합 A의 <<연산자 : " << endl;
	//cout << A;
	cout << "집합 A의 >>연산자 : " << endl;
	/*cin >> A;
	A.display();*/
	return 0;
}