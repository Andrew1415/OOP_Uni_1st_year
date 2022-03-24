// 3.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class Dots {
private:
    int x;
    int y;
    int z;
public:
    void setX() { cout << "X:"; cin >> x; cout << endl; };
    void setY() { cout << "Y:"; cin >> y; cout << endl; };
    void setZ() { cout << "Z:"; cin >> z; cout << endl; };
    int getX() { return x; };
    int getY() { return y; };
    int getZ() { return z; };
};
class Line {
private:
    Dots Dot1;
    Dots Dot2;
    int Length;
public:
    void setLine();
    double getLine() { return Length; };
    void calculateLine() { Length = sqrt(pow(Dot2.getX() - Dot1.getX(), 2) + pow(Dot2.getY() - Dot1.getY(), 2) + pow(Dot2.getZ() - Dot1.getZ(), 2)); };
};
class Skritulys {
private:
    double S;
    Line spindulys;
public:
    double getS() { return S; };
    void calculateS() { spindulys.setLine(); spindulys.calculateLine(); S = 3.14 * pow(spindulys.getLine(), 2); };
};
class Kugis {
private:
    Skritulys Circle1;
    Skritulys Circle2;
    Line Hight;
    double V;

public:
    double getV() { return V; }
    void calculateV();
    Kugis();
    void print();
};
void main()
{
    cout << "Uzduotis 3.3 by Andrius Stulgys" << endl;
    Kugis Kug;
    Kug.print();
    system("pause");
}

void Kugis::calculateV()
{
    cout << "Vykdomas kugio turio skaiciaviams" << endl;
    V = ((Circle1.getS() + sqrt(Circle1.getS() * Circle2.getS()) + Circle2.getS()) / 3) * Hight.getLine();
    cout << "Skaiciavimas baigtas." << endl;
}

Kugis::Kugis()
{
    cout << "Vykdomas kugio klases konstruktorius" << endl;
    cout << "Kugio aukstis:";
    Hight.setLine();
    Hight.calculateLine();
    cout << "Kugio pado skritulio plotas:" << endl;
    Circle1.calculateS();
    cout << "Kugio virsunes skritulio plotas:" << endl;
    Circle2.calculateS();
    calculateV();
    cout << "Kugio klases konstruktorio pabaiga." << endl;
}

void Kugis::print()
{
    cout << "Gautas kugio turis: " << setprecision(3) << V << endl;
}

void Line::setLine()
{
    cout << "Atkarpos pradzios taskas:" << endl;
    Dot1.setX();
    Dot1.setY();
    Dot1.setZ();
    cout << "Atkrapos pabaigos taskas:" << endl;
    Dot2.setX();
    Dot2.setY();
    Dot2.setZ();
    calculateLine();
}