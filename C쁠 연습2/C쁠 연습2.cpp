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
		cout << "남은 자리: " << (sizeof(arr) / 4) - index<<endl;
	}
};


int main() {
	List<int> list;
	int arr[9] = { 12,52,38,87,28,10 };
	int rand;
	random_device seed;
	while (1) {
		int key;
		cout << "1.삽입" << endl << "2.출력" << endl << "==>";
		cin >> key;
		if (key == 1) {
			cout << "원소 입력: ";
			cin >> key;
			list.add(key);
		}
		else if (key == 2) {
			while (1) {
				rand = seed();
				if (rand > 0)
					break;
			}
			cout << "랜덤출력 값: "<<list.select(rand)<<endl;
		}
		else {
			cout << "잘못 입력" << endl;
		}
	}
}