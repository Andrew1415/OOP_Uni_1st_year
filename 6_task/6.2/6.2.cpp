// 6.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Irregular_Triangle {
private:
    string error = "Error";
public:
    Irregular_Triangle(string error) :error(error) {};
    string GetError() { return error; };
};

class Triangle {
private:
    double a;
    double b;
    double c;
    double longest;
public:
    void Check();
    Triangle(double a, double b, double c) :a(a), b(b), c(c) { Check(); };
};

int main()
{
    cout << "Uzduotis 6.2 by Andrius Stulgys" << endl;
    double a, b, c;
    cout << "Insert triangle sides:" << endl;
    cout << "Side A: ";
    cin >> a;
    cout << "Side B: ";
    cin >> b;
    cout << "Side C: ";
    cin >> c;
    
    try {
        Triangle triangle(a, b, c);
        cout << "Triangle is correct." << endl;
    } catch (Irregular_Triangle& triangle) {
        cerr << "Triangle is incorecrt" << endl;
        cerr << triangle.GetError() << endl;
    }


    system("pause");
    return 0;
}

void Triangle::Check() {
    if (a > b && a > c)
        longest = a;
    else if (b > a && b > c)
        longest = b;
    else
        longest = c;

    if (a + b < c || a + c < b || b + c < a)
        throw Irregular_Triangle("Longest side is: " + to_string(longest));
}