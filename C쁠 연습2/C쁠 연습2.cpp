#include<iostream>
#include"header.h"
using namespace std;

template<typename T, size_t N, typename U,size_t M>
bool equalArrays(T (&temp1)[N], U (&temp2)[M]) {
	if (N == M) {
		for (int i = 0; i < N; i++) {
			if (temp1[i] != temp2[i])
				return false;
		}
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int x1[] = { 1, 10, 100, 5, 4 };
	int x2[] = { 1, 10, 100, 5, 4 };
	if (equalArrays(x1, x2))
		cout << "두개의 배열은 같습니다." << endl;
	else
		cout << "두개의 배열은 다릅니다." << endl;
	double y1[] = { 6.4, 3.3, -200.6, 7.7, 8.8, 20.3 };
	double y2[] = { 6.4, 3.4, -200.6, 7.7, 8.8, 20.3 };
	if (equalArrays(y1, y2))
		cout << "두개의 배열은 같습니다." << endl;
	else
		cout << "두개의 배열은 다릅니다." << endl;
}