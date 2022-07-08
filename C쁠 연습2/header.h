//18-1
class Converter {
protected:
	double ratio;
public:
	virtual double convert(double src) = 0;
};

class WonToDollar : public Converter {
public:
	WonToDollar(double temp);
	void run();
	double convert(double src);
};