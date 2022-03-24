// 5.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Items {
protected:
    string name;
    int amount;
    double cost;
    string discount;
    double fullCost;
public:
    virtual void calculateFullCost() { fullCost = amount * cost; };
    Items(string name, int amount, double cost, string discount) :name(name), amount(amount), cost(cost), discount(discount) {};
    virtual double getFullCost() { return fullCost; };
    virtual void printInfo();
};
class Discounted_Items : public Items {
protected:
    double discountAmount;
public:
    virtual void calculateFullCost() { fullCost = cost * (1 - discountAmount / 100) * amount; };
    Discounted_Items(string name, int amount, double cost, string discount, double discountAmount) :discountAmount(discountAmount),Items(name, amount, cost, discount) {};
    virtual double getFullCost() { return fullCost; };
    virtual void printInfo();
};
int main()
{
    cout << "Uzduotis 5.3 by Andrius Stulgys." << endl;
    string name;
    int amount;
    double cost;
    string discount;
    double discountAmount;
    int n;
    double costOfAll=0;
    Items* Item[10];
    cout << "Amount of different items: ";
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cout << "Product name:";
        cin >> name;
        cout << "Amount of this products:";
        cin >> amount;
        cout << "Cost of this product:";
        cin >> cost;
        cout << "Is this product discounted? (Y/N)";
        cin >> discount;
        if (discount == "Y")
        {
            cout << "Discount amount (from 0% to 100%):";
            cin >> discountAmount;
            Item[i] = new Discounted_Items(name, amount, cost, discount, discountAmount);
        }
        else Item[i]=new Items(name, amount, cost, discount);
        Item[i]->calculateFullCost();
        costOfAll =costOfAll +Item[i]->getFullCost();
    }
    for (int i = 0; i < n; i++)
    {
        Item[i]->printInfo();
    }
    cout << "--------------------------------------------------" << endl;
    cout << "Full cost of all products: " << costOfAll << " eur." << endl;
    cout << "--------------------------------------------------" << endl;
    system("Pause");
    return 0;
}

void Items::printInfo()
{
    cout << "Product name: " << name << endl;
    cout << "Product amount: " << amount << endl;
    cout << "Product cost per 1 item: " << cost << " eur." << endl;
    cout << "Full cost of these items: " << fullCost << " eur." << endl;
    cout << endl;
}

void Discounted_Items::printInfo()
{
    cout << "Product name: " << name << endl;
    cout << "Product amount: " << amount << endl;
    cout << "Product cost per 1 item: " << cost << " eur." << endl;
    cout << "Product discount amount: " << discountAmount << "%" << endl;
    cout << "Full cost of these items: " << fullCost << " eur." << endl;
    cout << endl;
}
