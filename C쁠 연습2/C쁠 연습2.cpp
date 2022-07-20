#include<iostream>
#include"header.h"
using namespace std;

int main() {
	Ctrl good;
	char key;
	while (1) {
		cout << "°è¼Ó?";
		cin >> key;
		if (key == 'n' || key == 'N')
			break;
		if (good.Give() == 0) {
			cout << good;
			break;
		}
	}
}