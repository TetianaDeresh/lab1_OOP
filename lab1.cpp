#include <iostream>
#include <cmath>

using namespace std;

class Rectangle
{
private:
	double height;
	double width;

public:
	Rectangle() { width = height = 0; }
	Rectangle(double w, double h) { width = w; height = h; }
	~Rectangle() {}

	double getWidth() { return width; }

	double getHeight() { return height; }


	void setWidth(double w) { 
		while (w <= 0) {
			cout << "This parameter is not correct!Enter again, please" << endl;
			cin >> w;
		}
		width = w;

	}

	void setHeight(double h) { 
	if (h <= 0) {
		cout << "This parameter is not correct!Enter again, please" << endl;
		cin >> h;
	}
	height = h;
	}

	void Print() { cout << "Height: " << height <<"\nWidth:" << width << endl; }

	double Area() {
		double a = width * height;
		return a;
	}

	double Perimeter() {
		double p = 2 * (width + height);
		return p;
	}

};


int main()

{
	double width, height;
	Rectangle obj;
	cout << "Enter the width: ";
	cin >> width;
	obj.setWidth(width); 
	cout << "Enter the height: ";
	cin >> height;
	obj.setHeight(height); 
	obj.Print(); 
	cout << "Area: " << obj.Area() << endl;
	cout << "Perimeter: " << obj.Perimeter() << endl;
	return 0;
}


