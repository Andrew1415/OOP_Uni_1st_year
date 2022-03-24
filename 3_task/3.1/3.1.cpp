// 3.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

class Dot {
private:
	int x;
	int y;
public:
	int getX() { return x; };
	int getY() { return y; };
	void setX() { cout << "x:"; cin >> x; };
	void setY() { cout << "y:"; cin >> y; };
};
class Rectangle {
private:
	Dot Dot1;
	Dot Dot2;
	Dot Dot3;
	Dot Dot4;
	double side1;
	double side2;
	double side3;
	double side4;
	double perimeter;
	double area;
public:
	Rectangle();
	void calculateSides();
	void calculatePerimeter();
	void calculateArea();
	void print();

};

Rectangle::Rectangle()
{
	cout << "First dot cordinates: " << endl;
	Dot1.setX();
	Dot1.setY();
	cout << "Second dot cordinates: " << endl;
	Dot2.setX();
	Dot2.setY();
	cout << "Third dot cordinates: " << endl;
	Dot3.setX();
	Dot3.setY();
	cout << "Fourth dot cordinates: " << endl;
	Dot4.setX();
	Dot4.setY();
	calculateSides();
	calculatePerimeter();
	calculateArea();
}

void Rectangle::calculateSides()
{
	side1 = sqrt(pow(Dot1.getX() - Dot2.getX(), 2) + pow(Dot1.getY() - Dot2.getY(), 2));
	side2 = sqrt(pow(Dot2.getX() - Dot3.getX(), 2) + pow(Dot2.getY() - Dot3.getY(), 2));
	side3 = sqrt(pow(Dot3.getX() - Dot4.getX(), 2) + pow(Dot3.getY() - Dot4.getY(), 2));
	side4 = sqrt(pow(Dot4.getX() - Dot1.getX(), 2) + pow(Dot4.getY() - Dot1.getY(), 2));
	cout << "side1:" << side1 << endl;
	cout << "side2:" << side2 << endl;
	cout << "side3:" << side3 << endl;
	cout << "side4:" << side4 << endl;
}

void Rectangle::calculatePerimeter()
{
	perimeter = side1 + side2 + side3 + side4;
}

void Rectangle::calculateArea()
{
	if (side1 != side2 && side3 != side4)
		area = side1 * side2;
	else if (side1 != side3 && side2 != side4)
		area = side1 * side3;
	else if (side1 == side2 == side3 == side4)
		area = side1 * side1;
	else
		area = 0;
		
}

void Rectangle::print()
{
	cout << "Rectangles perimeter: " << perimeter << endl;
	cout << "Rectangles area: " << area << endl;
}

void main()
{
	Rectangle Rectangle1;
	Rectangle1.print();
	system("pause");
}