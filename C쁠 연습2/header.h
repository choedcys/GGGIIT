//18-12
class Calculator {
public:
	Calculator();
	virtual int add(int a, int b) = 0; // 두정수의합리턴
	virtual int subtract(int a, int b) = 0; // 두정수의차리턴
	virtual double average(int a[], int size) = 0; // 배열a의평균리턴size는배열의크기
};

class GoodCalc :public Calculator {
public:
	GoodCalc();
	int add(int a, int b);
	int subtract(int a, int b) ;
	double average(int a[], int size);
};