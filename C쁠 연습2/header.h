#include <iostream>
#include <cstdlib>
using namespace std;

class IntArray {
private:
	int* arr;
	int arrlen;
	IntArray(const IntArray& arr) { }
	IntArray& operator=(IntArray& arr) { }
public:
	IntArray(int temp);
	int& operator[] (int temp);
	int getArrLen();
	~IntArray();
};
