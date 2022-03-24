// 3.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class Skritulys {
private:
    double S;
public:
    double getS() { return S; };
    void setS() { cout << "S:"; cin >> S; cout << endl; };
};
class Kugis {
private:
    Skritulys Circle1;
    Skritulys Circle2;
    double H;
    double V;

public:
    double getH() { return H; }
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
    V = ((Circle1.getS() + sqrt(Circle1.getS() * Circle2.getS()) + Circle2.getS()) / 3) * H;
    cout << "Skaiciavimas baigtas." << endl;
}

Kugis::Kugis()
{
    cout << "Vykdomas kugio klases konstruktorius" << endl;
    cout << "Kugio aukstis:";
    cin >> H;
    cout << "Kugio pado skritulio plotas:" << endl;
    Circle1.setS();
    cout << "Kugio virsunes skritulio plotas:" << endl;
    Circle2.setS();
    calculateV();
    cout << "Kugio klases konstruktorio pabaiga." << endl;
}

void Kugis::print()
{
    cout << "Gautas kugio turis: " << setprecision(3) << V << endl;
}
