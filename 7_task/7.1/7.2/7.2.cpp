// 7.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    void printItem();
    static double GetAllCost() { return costOfAllItems; };
};
double Item::costOfAllItems = 0;
struct Expensivnes {
    char name[Name_Size];
    double cost;
};
int main()
{
    Expensivnes expensive;
    Expensivnes cheapest;
    cout << "Uzdtuotis 7.2 by Andrius Stulgys" << endl;
    char name[Name_Size];
    int amount;
    double cost;
    int n;
    cout << "Iveskite skirtingiu prekiu kieki: ";
    cin >> n;
    Item** Preke;
    Preke = new Item * [n];
    cout << Line << endl;
    strcpy_s(expensive.name, "banana");
    expensive.cost = 0;
    strcpy_s(cheapest.name, "banana");
    cheapest.cost = 500000;
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
        if (cost > expensive.cost) 
        {
            strcpy_s(expensive.name, name);
            expensive.cost = cost;
        }
        if (cost < cheapest.cost)
        {
            strcpy_s(cheapest.name, name);
            cheapest.cost = cost;
        }

    }
    for (int i = 0; i < n; i++)
    {
        cout << "Nr. " << i + 1 << endl;
        Preke[i]->printItem();
    };
    cout << Line << endl;
    cout << "Reikema sumoketi suma: " << Preke[n]->GetAllCost() << " Eur." << endl;
    cout << "Brangiausia preke: " << expensive.name << " Kaina: " << expensive.cost << endl;
    cout << "Pigiausia preke: " << cheapest.name << " Kaina: " << cheapest.cost << endl;
    for (int i = 0; i < n; i++)
    {
        delete Preke[i];
    }
    delete[] Preke;
    return 0;
}

void Item::printItem()
{
    cout << Line << endl;
    cout << "Prekes pavadinimas: " << name << endl;
    cout << "Prekiu kiekis: " << amount << endl;
    cout << "Prekiu kaina: " << costOfMany << endl;
    cout << Line << endl;
}
