// 6.1.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>

using namespace std;

template <typename T1, typename T2> class Rectangle {
protected:
    T1 Length;
    T2 Width;
    T2 Area;
public:
    void calculateArea() { Area = Length * Width; };
    T2 getArea() { return Area; };
    Rectangle(T1 Length, T2 Width) : Length(Length), Width(Width) { calculateArea(); };
};


int main()
{
    int length1, width1;
    double length2, width2;
    cout << "Uzduotis 6.1 by Andrius Stulgys" << endl;
    cout << "1. All int's: " << endl;
    cout << "Length: ";
    cin >> length1;
    cout << "Width: ";
    cin >> width1;
    Rectangle <int, int> Obj1(length1, width1);
    cout << "2. All double's: " << endl;
    cout << "Length: ";
    cin >> length2;
    cout << "Width: ";
    cin >> width2;
    Rectangle <double, double> Obj2(length2,width2);
    cout << "3. Int and double: " << endl;
    cout << "int Length: ";
    cin >> length1;
    cout << "double Width: ";
    cin >> width2;
    Rectangle <int, double> Obj3(length1,width2);
    cout << "Area of the first methode: " << Obj1.getArea() << endl;
    cout << "Area of the first methode: " << Obj2.getArea() << endl;
    cout << "Area of the first methode: " << Obj3.getArea() << endl;
    system("pause");
    return 0;
}

