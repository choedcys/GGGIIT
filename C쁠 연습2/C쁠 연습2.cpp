#include<iostream>
#include<string>
#include"header.h"
using namespace std;
int main() {
	string name;
	int key, kor, eng, mat, soc, his, sci;
	Evaluation* sp = NULL, * ep = NULL, * cp = NULL;
	Ctrl list;
	while (1) {
		cout << "===메뉴===" << endl << "1. 입력" << endl << "2. 전체성적표" << endl << "3. 개인성적표" << endl << "4. 종료" << endl << "선택=> ";
		cin >> key;
		if (key == 1) {
			list.input();
		}
		else if (key == 2) {
			list.all();
		}
		else if (key == 3) {
			list.one();
		}
		else if (key == 4) {
			cout << "프로그램 종료";
			break;
		}
		else {
			cout << "잘못된 입력!, 다시 입력하시오" << endl;
		}
	}
}
