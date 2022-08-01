class Number {
private:
	int num;
public:
	Number(int n);
	void showData();
	Number* operator->();
	Number& operator*();
};
