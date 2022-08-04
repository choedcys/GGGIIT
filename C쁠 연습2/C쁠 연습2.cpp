#include <iostream>
#include"header.h"
using namespace std;

int main() {
	String s1("Hello ",5);
	String s2("World!",5);
	String s3 = s1 + s2;
	String s4;
	String s5("Hello ",5);
	s1.print();
	s2.print();
	s3.print();
	cout << "String s4 : ";
	cout << (!s4) << endl;
	cout << "s1(Hello) == s5(Hello) : ";
	cout << (s1 == s5) << endl;
	cout << "s1(Hello) != s5(Hello) : ";
	cout << (s1 != s5) << endl;
	cout << "s1(Hello) < s2(World!) : ";
	cout << (s1 < s2) << endl;
	cout << "s1(Hello) > s2(World!) : ";
	cout << (s1 > s2) << endl;
	cout << "s1(Hello) <= s2(World!) : ";
	cout << (s1 <= s2) << endl;
	cout << "s1(Hello) >= s2(World!) : ";
	cout << (s1 >= s2) << endl;
	return 0;
}