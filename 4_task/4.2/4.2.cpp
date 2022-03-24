// 4.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
class Cords {
private:
    int x;
    int y;
    int z;
public:
    void setX(int X) { x = X; };
    void setY(int Y) { y = Y; };
    void setZ(int Z) { z = Z; };
    int getX() { return x; };
    int getY() { return y; };
    int getZ() { return z; };
};
class Vektor : public Cords {
private:
    double vektor;
public:
    void calculateVektor() { vektor = sqrt(pow(getX(), 2) + pow(getY(), 2) + pow(getZ(), 2)); };
    double getVektor() { return vektor; };
    void setCords();
    Vektor();
    void print();
};

int main()
{
    cout << "Uzduotis 4.2 by Andrius Stulgys" << endl;
    Vektor vector;
    vector.print();
    system("pause");
    return 0;
}

void Vektor::setCords()
{
    int option;
    int X, Y, Z;
    cout << "Calculate vector length" << endl;
    cout << "Is your vector 2D OR 3D" << endl;
    cout << "Option 1 2D" << endl;
    cout << "Option 2 3D" << endl;
    cout << "Your option(insert number): ";
    cin >> option;
    switch (option)
    {
    case 1: {
        cout << "X length:";
        cin >> X;
        cout << "Y length:";
        cin >> Y;
        Z = 0;
        break;
    }
    case 2:
    {   cout << "X length:";
    cin >> X;
    cout << "Y length:";
    cin >> Y;
    cout << "Z length:";
    cin >> Z;
    break;
    }
    };
    setX(X);
    setY(Y);
    setZ(Z);
}

Vektor::Vektor()
{
    setCords();
    calculateVektor();
}

void Vektor::print()
{
    cout << "Calculated vector legth: " << vektor << endl;
}
