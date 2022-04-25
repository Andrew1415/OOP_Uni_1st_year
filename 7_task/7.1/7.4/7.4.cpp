// 7.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;
struct Dot {
    int x;
    int y;
};
class Rectangle {
protected:
    static Dot Dot1;
    Dot Dot2;
public:
    double Area() { return ((Dot2.x - Dot1.x) * (Dot2.y - Dot1.y)); };
    double Perimeter() { return 2 * ((Dot2.x - Dot1.x) + (Dot2.y - Dot1.y)); };
    static void changeMainDot(int x, int y) { Dot1.x = x; Dot1.y = y; };
    void changeDot2(int x, int y) { Dot2.x = x; Dot2.y = y; };
};
Dot Rectangle::Dot1;
int main() {
    cout << "Uzdtuotis 7.4 by Andrius Stulgys" << endl;
    int x, y;
    cout << "Iveskite pagrindinio tasko kordinates: " << endl;
    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;
    Rectangle::changeMainDot(x, y);
    int n;
    cout << "Kiek staciakampiu skaiciuosite: ";
    cin >> n;
    Rectangle* Staciakampis=new Rectangle[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Staciakampis Nr." << i + 1 << endl;
        cout << "Antrojo tasko kordinates: " << endl;
        cout << "X: ";
        cin >> x;
        cout << "Y: ";
        cin >> y;
        Staciakampis[i].changeDot2(x, y);
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Staciakampio Nr." << i + 1 << endl;
        cout << "Plotas: " << Staciakampis[i].Area() << endl;
        cout << "Perimetras: " << Staciakampis[i].Perimeter() << endl;
    };
    while (true)
    {
        string temp;
        cout << "Ar norite pakeisti pagrindinio tasko kordinates ir skaiciuoti is naujo?(Y/N).";
        cin >> temp;
        if (temp == "Y" || temp == "y")
        {
            cout << "Pagrindinio tasko kordinastes:" << endl;
            cout << "X: ";
            cin >> x;
            cout << "Y: ";
            cin >> y;
            Rectangle::changeMainDot(x, y);
            for (int i = 0; i < n; i++)
            {
                cout << "Staciakampio Nr." << i + 1 << endl;
                cout << "Plotas: " << Staciakampis[i].Area() << endl;
                cout << "Perimetras: " << Staciakampis[i].Perimeter() << endl;
            };
        }
        else if (temp == "N" || temp == "n")
        {
            break;
        }
        else { cout << "Error" << endl << "Prasom pakartoti ivedima." << endl; };

    };
    system("pause");
    return 0;
}
