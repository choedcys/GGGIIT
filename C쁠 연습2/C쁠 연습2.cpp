#include <iostream>
#include"header.h"
using namespace std;


int main()
{
	Set A, B, C;
	cout << "���� A�� ���Ҵ� : " << endl;
	A + 3;
	A + 4;
	A.display();
	A + 4;
	A.display();
	A - 4;
	A.display();
	A + 4;
	A.display();

	cout << "���� B�� ���Ҵ� : " << endl;
	B + 3;
	B.display();
	B + 4;
	B.display();
	B + 5;
	B.display();
	cout << "���� A�� B�� ������ : " << endl;
	C = A | B;
	C.display();
	cout << "���� A�� B�� ������ : " << endl;
	C = A & B;
	C.display();
	cout << "���� A�� B�� ==������ : " << endl;
	bool tmp = A == B;
	if (tmp == true)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	cout << "���� A�� <<������ : " << endl;
	//cout << A;
	cout << "���� A�� >>������ : " << endl;
	/*cin >> A;
	A.display();*/
	return 0;
}