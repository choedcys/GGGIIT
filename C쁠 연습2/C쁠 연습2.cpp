#include <iostream>
#include <cstdlib>
#include"header.h"
using namespace std;

void showAllData(IntArray& ref) {
	int len = ref.getArrLen();
	for (int idx = 0; idx < len; idx++)
		cout << ref[idx] << endl;
}

int main(void)
{
	IntArray A(5);
	for (int i = 0; i < 5; i++)
		A[i] = (i + 1) * 11;
	showAllData(A);
}
