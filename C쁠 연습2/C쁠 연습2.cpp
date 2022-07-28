#include<iostream>
using namespace std;

template<typename T>
class Node {
public:
	T data;
	Node<T>* next;
	Node() {}
};




int main() {
	cout << "int:";
	int num;
	Node<int>* sp = NULL;
	Node<int>* ep = NULL;
	Node<int>* cp = NULL;
	while (1) {
		cin >> num;
		if (num == -1) {
			break;
		}
		if (sp == NULL) {
			sp = new Node<int>;
			ep = sp;
		}
		else
		{
			ep->next = new Node<int>;
			ep = ep->next;
		}
		ep->data = num;
		ep->next = NULL;
	}
	cp = sp;
	while (1) {
		if (cp == NULL) {
			break;
		}
		cout << cp->data << endl;
		cp = cp->next;
	}
}