//18-10
class Shape {
protected:
	double x, y, z;
public:
	Shape(double temp1, double temp2, double temp3);
	virtual void show()=0;
};

class Ellipse : public Shape{
	double area;
public:
	Ellipse(double temp);
	void show();
};
class Rectangle : public Shape {
	double area;
public:
	Rectangle(double temp1, double temp2);
	void show();
};
class Triangle : public Shape {
	double area;
public:
	Triangle(double temp1, double temp2);
	void show();
};
class Sphere : public Shape {
	double vol;
public:
	Sphere(double temp);
	void show();
};
class Cube : public Shape {
	double vol;
public:
	Cube(double temp1, double temp2, double temp3);
	void show();
};
class Cylinder : public Shape {
	double vol;
public:
	Cylinder(double temp1, double temp2);
	void show();
};