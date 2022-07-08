//18-5
#include<iostream>
using namespace std;

class LoopAdder { 
	string name; 
	int x, y, sum;
	void read();
	void write();
protected:
	LoopAdder(string temp);
	int getX();
	int getY();
	virtual int calculate() = 0;
public:
	void run();
};

class ForLoopAdder :public LoopAdder{
public:
	ForLoopAdder(string temp);
	int calculate();
};