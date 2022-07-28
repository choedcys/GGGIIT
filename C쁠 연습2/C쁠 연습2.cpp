#include<iostream>
#include<random>
using namespace std;

template<typename T>
class Queue {
	T Q[4];
	T no = NULL;
	int r,f;
public:
	Queue():r(0),f(0){}
	T peek() {
		if(isempty() == false)
			return Q[f];
		else {
			cout << "ť�� �������";
			return no;
		}
	}
	void enque(T temp) {
		if (isfull() == false)
			Q[r++] = temp;
		else
			cout << "���� ť"<<endl;
	}
	T deque() {
		if (isempty() == false)
			return Q[f++];
		else {
			cout << "ť�� �������";
			return no;
		}
	}
	bool isfull() {
		if (f == (r + 1 )%4)
			return true;
		else
			return false;
	}
	bool isempty() {
		if (f==r)
			return true;
		else
			return false;
	}
};


int main() {
	Queue<int> q;
	int key;
	while (1) {
		cout << "1. ENQUE\n2. DEQUE\n3.PEEK\n==>";
		cin >> key;
		if (key == 1) {
			cout << "�� �Է�: ";
			cin >> key;
			q.enque(key);
		}
		else if (key == 2) {
			cout << q.deque()<<endl;
		}
		else if (key == 3) {
			cout << q.peek()<<endl;
		}
		else {
			cout << "�߸��� �Է�"<<endl;
		}
	}
}