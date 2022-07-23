#include<iostream>
#include"header.h"
using namespace std;

template<typename T, typename U>
void mcopy(T* temp1, U* temp2, int temp3) {
	for (int i = 0; i < temp3; i++) {
		temp2[i] = temp1[i];
	}
}

int main() {
	int x[5] = {1, 2, 3, 4, 5};
	double d[5];
	char c[5] = { 'H', 'e', 'l', 'l', 'o' }, e[5];
	mcopy(x, d, 5); // int x[]�� ���� 5���� double d[]�� ���� 
	mcopy(c, e, 5); // char c[]�� ���� 5���� char e[]�� ����
	for (int i = 0; i < 5; i++) cout << d[i] << ' '; // d[] ���
	cout << endl;
	for (int i = 0; i < 5; i++) cout << e[i] << ' '; // e[] ���
	cout << endl;

}
