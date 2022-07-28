#include <iostream>
#include"header.h"
#include <cstdlib>
using namespace std;

int main() {
	int k = 5;
	newArr a(k);
	for (int i = 0; i < k+2; i++) {
		a[i] = i+1;
	}
	for (int i = 0; i < k+2; i++) {
		cout<<a[i]<<endl;
	}
}