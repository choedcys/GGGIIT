#include<iostream>
using namespace std;

template<typename T>
class SET {
	T arr[20];
	int cnt = 0;
public:
	SET(){}
	void add(T temp) {
		int i;
		for (i = 0; i < 20; i++) {
			if (arr[i] == temp)
				break;
		}
		if(i == 20)
			arr[cnt++] = temp;
	}
	void print() {
		for (int i = 0; i < cnt; i++) {
			cout << arr[i]<<" ";
		}
		cout << endl;
	}
};


int main() {
	SET<int> a;
	int key;
	while (1) {
		cout << "1. ADD\n2. PRINT\n3. EXIT\n==>";
		cin >> key;
		if (key == 1) {
			cout << "INPUT DATA: ";
			cin >> key;
			a.add(key);
		}
		else if (key == 2) {
			a.print();
		}
		else if (key == 3) {
			break;
		}
		else {
			cout << "잘못된 입력" << endl;
		}
	}
}