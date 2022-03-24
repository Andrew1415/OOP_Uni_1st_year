// 4.3.cpp : This file contains the 'main' function. Program execution begins and ends there.

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
class Circle {
protected:
    double r;
    double area;
public:
    void calculateArea() { area = M_PI * pow(r, 2); };
    double getArea() { return area; };
    void setR(double R) { r = R; };
};
class Cylinder : public Circle {
protected:
    double h;
    double volume;
public:
    void calculateVolume() { volume = getArea() * h; };
    void setH(double H) { h = H; };
    void setSpecs();
    void Print();
    Cylinder();

};
int main()
{
    cout << "Uzduotis 4.2 by Andrius Stulgys" << endl;
    Cylinder cyl;
    cyl.Print();
}

void Cylinder::setSpecs()
{
    int R, H;
    cout << "Insert the bottom circle radius: ";
    cin >> R;
    setR(R);
    cout << "Insert cylinders height: ";
    cin >> H;
    setH(H);
    calculateArea();
    calculateVolume();
}

void Cylinder::Print()
{
    cout << "Calculated cylinders volume is: " << volume << endl;
}

Cylinder::Cylinder()
{
    setSpecs();
}
