#include<iostream>
#include<random>
using namespace std;

template<typename T>
class List {
	T arr[20];
	int index = 0;
public:
	List(){}
	T select(int rand) {
		cout << rand<<" "<<rand % index;
		return arr[rand% index];
	}
	void add(T temp) {
		arr[index++] = temp;
		cout << "���� �ڸ�: " << (sizeof(arr) / 4) - index<<endl;
	}
};


int main() {
	List<int> list;
	int arr[9] = { 12,52,38,87,28,10 };
	int rand;
	random_device seed;
	while (1) {
		int key;
		cout << "1.����" << endl << "2.���" << endl << "==>";
		cin >> key;
		if (key == 1) {
			cout << "���� �Է�: ";
			cin >> key;
			list.add(key);
		}
		else if (key == 2) {
			while (1) {
				rand = seed();
				if (rand > 0)
					break;
			}
			cout << "������� ��: "<<list.select(rand)<<endl;
		}
		else {
			cout << "�߸� �Է�" << endl;
		}
	}
}