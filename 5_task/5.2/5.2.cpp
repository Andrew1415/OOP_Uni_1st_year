// 5.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
class Figure {
protected:
    double x = 0;
public:
    virtual double area() { return 0; };
    virtual string name() { return "null"; };
};
class Triangle : public Figure {
protected:
    double a;
    double b;
    double c;
public:
    virtual double area() { return sqrt(((a + b + c) / 2) * (((a + b + c) / 2) - a) * (((a + b + c) / 2) - b) * (((a + b + c) / 2) - c)); };
    Triangle(double a, double b, double c) :a(a), b(b), c(c) {};
    virtual string name() { return "Triangle"; };
};
class Rectangle : public Figure {
protected:
    double length;
    double width;
public:
    virtual double area() { return length * width; };
    Rectangle(double length, double width) :length(length), width(width) {};
    virtual string name() { return "Rectangle"; };
};
class Circle : public Figure {
protected:
    double r;
public:
    virtual double area() { return M_PI * pow(r, 2); };
    Circle(double r) :r(r) {};
    virtual string name() { return"Circle"; };
};
int main()
{
    cout << "Uzduotis 5.2 by Andrius Stulgys" << endl;
    double a, b, c, length, width, r;
    Figure* Fig[3];
    cout << "Trikampio krastine a:";
    cin >> a;
    cout << "Trikampio krastine b:";
    cin >> b;
    cout << "Trikampio krastine c:";
    cin >> c;
    cout << "Keturkampio ilgis:";
    cin >> length;
    cout << "Keturkampio plotas:";
    cin >> width;
    cout << "Skritulio spindulio ilgis:";
    cin >> r;
    Fig[0] = new Triangle(a, b, c);
    Fig[1] = new Rectangle(length, width);
    Fig[2] = new Circle(r);
    for (int i = 0; i < 3; i++)
    {
        cout << Fig[i]->name() << " plotas lygus " << Fig[i]->area();
    }
    system("pause");
    return 0;

}
