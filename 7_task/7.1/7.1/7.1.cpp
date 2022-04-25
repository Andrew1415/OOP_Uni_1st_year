// 7.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cstring>
#define Name_Size 50
#define Line "-------------------------------------"
using namespace std;
class Item {
protected:
    char name[Name_Size];
    int amount;
    double costOfOne;
    double costOfMany;
    static double costOfAllItems;
public:
    Item(char* name, int amount, double cost) :amount(amount), costOfOne(cost) { strcpy_s(this->name, name); CostOfMany(); costOfAllItems += costOfMany; };
    ~Item() { costOfAllItems -= costOfMany; };
    void CostOfMany() { costOfMany = amount * costOfOne; };
    static double GetAllCost() { return costOfAllItems; };
};
double Item::costOfAllItems = 0;
int main()
{   
    cout << "Uzdtuotis 7.1 by Andrius Stulgys" << endl;
    char name[Name_Size];
    int amount;
    double cost;
    int n;
    cout << "Iveskite skirtingiu prekiu kieki: ";
    cin >> n;
    Item** Preke;
    Preke = new Item * [n];
    cout << Line << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Nr. " << i + 1 << endl;
        cout << "Iveskite prekes pavadinima. (Max 75 simboliai): ";
        cin >> name;
        cout << "Iveskite sios prekes kieki: ";
        cin >> amount;
        cout << "Iveskite sios prekes kaina: ";
        cin >> cost;
        Preke[i] = new Item(name, amount, cost);
        cout << Line << endl;
    }
    cout << Line << endl;
    cout << "Reikema sumoketi suma: " << Preke[n]->GetAllCost() << " Eur." << endl;
    for (int i=0; i<n; i++)
    {
        delete Preke[i];
    }
    delete[] Preke;
    return 0;
}