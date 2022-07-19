#include<iostream>
#include"header.h"
using namespace std;

int main() {
	MyString array[5];
	cout << "과일 입력: ";
	for (int i = 0; i < 5; i++) {
		cin>>array[i];
	}
	if (array[0] > array[1]) {
		cout << array[0] << endl;
	}
	else {
		cout << array[1]<< endl;
	}
	cout << "모든 문자열 출력: " << endl;
	array[0] = array[0] + array[1] + array[2] + array[3] + array[4];
	for (int i = 0; i < 5; i++) {
		cout << array[i];
	}
	
}