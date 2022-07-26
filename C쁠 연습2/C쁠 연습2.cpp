#include<iostream>
using namespace std;
template<typename T>
T* concat(T* temp1, int temp1size, T* temp2, int temp2size) {
	T* res = new T[temp1size + temp2size];
	int i;
	for (i = 0; i < temp1size; i++) {
		res[i] = temp1[i];
	}
	cout << endl;
	for (  ; i < temp1size + temp2size; i++) {
		res[i] = temp2[i-temp1size];
	}
	return res;
}

int main() {
	int x[] = { 1,2,3 };
	int y[] = { 6,7,8,9 };
	int* p = concat(x, 3, y, 4);
	char a[] = { 'L', 'o', 'v', 'e' };
	char b[] = { 'C', '+', '+' };
	char* q = concat(a, 4, b, 3);
	for (int i = 0; i < 7; i++) {
		cout << p[i];
	}
	cout << endl;
	for (int i = 0; i < 7; i++) {
		cout << q[i];
	}
	cout << endl;

}