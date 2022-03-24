// 5.1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <cmath>
using namespace std;
class Funkcija {  
protected:
    double x;
public:
    virtual double getF(double x) { return 0; };
    virtual string name() { return 0; };
};
class Tiesine : public Funkcija {
private:
    double F;
    double k;
    double b;
public:
    virtual double getF(double x) { return k * x + b; };
    virtual string name() { return "Tiesine"; };
    Tiesine(double K, double B) :k(K), b(B){};
};
class Laipsnine : public Funkcija {
private:
    double F;
    int n;
public:
    virtual double getF(double x) { return pow(x, n); };
    virtual string name() { return "Laipsnine"; };
    Laipsnine(int N) :n(N) {};


};
class Sinusoide : public Funkcija {
private:
    double F;
public:
    virtual double getF() { return sin(x); };
    virtual string name() { return "Sinusoide"; };
    Sinusoide() {};
};
int main()
{
    cout << "Uzduotis 5.1 by Andrius Stulgys." << endl;
    double k, b, x;
    int n;
    cout << "Iveskite funkciju kintamaji x: ";
    cin >> x;
    cout << "Iveskite tiesines funkcijos kintamaji k: ";
    cin >> k;
    cout << "Iveskite tiesines funkcijos kintamaji b: ";
    cin >> b;
    cout << "Iveskite laipsnines funkijos kintamaji n: ";
    cin >> n;

    Funkcija* Funct[3];
    Funct[0] = new Tiesine(k,b);
    Funct[1] = new Laipsnine(n);
    Funct[2] = new Sinusoide();
    for(int i=0; i<3;i++)
    {
        cout << Funct[i]->name() << ": " << Funct[i]->getF(x) << endl;
    }

    


}