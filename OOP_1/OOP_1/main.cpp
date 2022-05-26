#include <iostream>

using namespace std; 

// abstract base class 
class Shape {
protected:
	string name;

public:
	Shape(string s)
	{
		name = s;
	}

	void setName(string s) {
		name = s;
	}

	string getName() const 
	{
		return name;
	}

	//pure virtual function 
	virtual double getArea() const = 0; 
	// all child classes inherite this function 

};

// first child class 
   //INHERÝTANCE 
class Circle :public Shape
{
	double radius;

public:
	Circle(string n, double r) :Shape(n)
	{
		radius = r;
	}

	void setRadius(double r)
	{
		radius = r;
	}

	double getRadius() const
	{
		return radius;
	}

	virtual double getArea() const
	{
		return 3.1415 * radius * radius; 
	}

};


class Rectangle :public Shape
{
	double width, length;

public:
	Rectangle(string n, double l, double w) : Shape(n)
	{
		length = l;
		width = w;
	}

	void setLength(double l)
	{
		length = l;
	}
	void setWidth(double w)
	{
		width = w;
	}

	double getLength() const
	{
		return length;

	}

	double getWidth() const
	{
		return width;
	}

	virtual double getArea()const
	{
		return length * width; 
	}

};






int main (){


	 //Shape s("Foo"); you can't create an object from abstract classs 

	//cout << s.getName() << endl;


	/*
	Circle c("circle", 3);
	c.setName("circle too");

	cout << " name : " << c.getName() << endl;
	cout << "getradius " << c.getRadius() << endl;
	cout <<  " getArea for circle : " << c.getArea() << endl; // VÝRTUAL FUNCÝTON !!!

	Rectangle r("rectangle", 3.6, 6.5);
	cout << r.getName() << endl;
	cout << r.getWidth() << endl;
	cout << r.getLength() << endl;
	cout << "getArea  FOR  rectangle : " << r.getArea() << endl;

*/

	Shape* shapes[3] = { new Circle("circle",2.4) ,
		        new Rectangle("rectangle",3.6 ,7.5) }; 

	//print area of all objects in the shape array
	for (int i = 0; i < 3; i++)
	{
		cout << "shape" << i << "area " << shapes[i]->getArea() << endl;
	  }

/*
// base class 
class Shape {
protected :
	string name; 

public :
	Shape(string s)
	{
		name = s; 
	}

	void setName(string s) {
		name = s; 
	}

	string getName()
	{
		return name; 
	}

};

// first child class 
   //INHERÝTANCE 
class Circle :public Shape
{
	double radius; 

public: 
	Circle(string n, double r) :Shape(n)
	{
		radius = r; 
	}

	void setRadius(double r)
	{
		radius = r; 
	}

	double getRadius() const
	{
		return radius; 
	}

 };


class Rectangle:public Shape
{
	double width, length; 

public : 
	Rectangle(string n, double l, double w) : Shape(n)
	{
		length = l; 
		width = w; 
	}

	void setLength(double l)
	{
		length = l;
	}
	void setWidth(double w)
	{
		width = w; 
	}

	double getLength() const
	{
		return length;

	}

	double getWidth() const
	{
		return width; 
	}


	};

	
	



int main() {
	Shape s("Foo"); 
	cout << s.getName() << endl;

	Circle c("circle", 3);
	c.setName("circle too");

	cout << " name : " << c.getName() << endl;
	cout << "getradius " << c.getRadius() << endl; 

	Rectangle r("rectangle", 3.6, 6.5); 
	cout << r.getName() << endl; 
	cout << r.getWidth() << endl; 
	cout << r.getLength() << endl; 
	
	  */

	return 0; 
}