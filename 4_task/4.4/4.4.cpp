// 4.4.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <cmath>

using namespace std;
class Geometrical_Shape {
private:
	double perimeter;
	double area;
public:
	void setPerimeter(double X) { perimeter = X; };
	void setArea(double Z) { area = Z; };
	double getPerimeter() { return perimeter; };
	double getArea() { return area; };
};
class Rectangle : public Geometrical_Shape {
private:
	double length;
	double width;
public:
	void calculateArea();
	double getLength() { return length; };
	double getWidth() { return width; };
	void setLength(double X) { length = X; };
	void setWidth(double Z) { width = Z; };
};
class Hyperrectangle : public Rectangle {
private:
	double heigth;
	double volume;
public:
	void calculatePerimeter();
	void calculateVolume() { volume = getArea() * heigth; };
	void setHeigth(double C) { heigth = C; };
	double getHeigth() { return heigth; };
	double getVolume() { return volume; };
	Hyperrectangle();
	Hyperrectangle(double temp1, double temp2, double temp3);
	void calculations();
	void Print();
};


int main() {
	Hyperrectangle Shape1(15, 25, 30);
	Hyperrectangle Shape2;
	Shape1.calculations();
	Shape2.calculations();
	Shape1.Print();
	Shape2.Print();
	system("pause");
	return 0;
}

void Rectangle::calculateArea()
{
	double Z = length * width;
	setArea(Z);
}

void Hyperrectangle::calculatePerimeter()
{
	double X = getLength() * 4 + getWidth() * 4 + heigth * 4;
	setPerimeter(X);
}

Hyperrectangle::Hyperrectangle()
{
	double X, Z, C;
	cout << "Vykdomas konstruktorius be pradiniu parametru." << endl;
	cout << "Geometrines figuros ilgis: ";
	cin >> X;
	setLength(X);
	cout << "Geometrines figuros plotis: ";
	cin >> Z;
	setWidth(Z);
	cout << "Geometrines figuros aukstis: ";
	cin >> C;
	setHeigth(C);
	cout << "Konstruktoriaus vykdymas baigtas." << endl;
}

Hyperrectangle::Hyperrectangle(double temp1, double temp2, double temp3)
{
	cout << "Vykdomas konstruktorius su priskirtais pradiniais duomenimis." << endl;
	setLength(temp1);
	setWidth(temp2);
	setHeigth(temp3);
	cout << "Konstruktoriaus vykdymas baigtas." << endl;
}

void Hyperrectangle::calculations()
{
	calculateArea();
	calculatePerimeter();
	calculateVolume();
}

void Hyperrectangle::Print()
{
	cout << "-----------------------------------" << endl;
	cout << "Geometrical shape and its specs:" << endl;
	cout << "-----------------------------------" << endl;
	cout << "Length: " << getLength() << endl;
	cout << "Width: " << getWidth() << endl;
	cout << "Heigth: " << getHeigth() << endl;
	cout << "-----------------------------------" << endl;
	cout << "Area: " << getArea() << endl;
	cout << "Perimeter: " << getPerimeter() << endl;
	cout << "Volume: " << getVolume() << endl;
	cout << "-----------------------------------" << endl;

}
