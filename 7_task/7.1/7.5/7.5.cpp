// 7.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define line "----------------------------------"
using namespace std;
struct Coffee {
    string name;
    double cost;
};
class CoffeeMachine {
private:
    static Coffee C[5];
public:
    void PrintCoffeeList();
    static void calculateChange(int opt, int money);
    static void change(int money);
};
Coffee CoffeeMachine::C[5]{
        {"Lattee",140},
        { "Cappuccino",150 },
        { "Coffee with milk",120 },
        { "Black coffee",80 },
        { "Espresso",70 },
    };
void CoffeeMachine::PrintCoffeeList()
{
    cout << "Kavos: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout <<"Nr. "<< i <<" "<< C[i].name << " " << C[i].cost << " Eur." << endl;
    };
}
void CoffeeMachine::change(int money)
{
    int change005 = 0, change01 = 0, change02 = 0, change05 = 0, change1 = 0, change2 = 0;
    change2 = money / 200;
    change1 = money % 200 / 100;
    change05 = money % 200 % 100 / 50;
    change02 = money % 200 % 100 % 50 / 20;
    change01 = money % 200 % 100 % 50 % 20 / 10;
    change005 = money % 200 % 100 % 50 % 20 % 10 / 5;
    cout << "Jusu graza: " << endl;
    if (change2 > 0) cout << change2 << " po 2 eur." << endl;
    if (change1 > 0) cout << change1 << " po 1 eur." << endl;
    if (change05 > 0) cout << change05 << " po 0.5 eur." << endl;
    if (change02 > 0) cout << change02 << " po 0.2 eur." << endl;
    if (change01 > 0) cout << change01 << " po 0.1 eur." << endl;
    if (change005 > 0) cout << change005 << " po 0.05 eur." << endl;
    if (change2 == 0 && change1 == 0 && change05 == 0 && change02 == 0 && change01 == 0 && change005 == 0) cout << "Grazos nera" << endl;
}
void CoffeeMachine::calculateChange(int opt, int money)
{
    
    switch (opt)
    {
    case 0: {
        if (money >= C[0].cost)
        {
            money = money - C[0].cost;
            change(money);
            break;
        }
        else {
            cout << "Nepakankamas suma." << endl;
            break;
        }  
    }
    case 1: {
        if (money >= C[1].cost)
        {
            money = money - C[1].cost;
            change(money);
            break;
        }
        else {
            cout << "Nepakankamas suma." << endl;
            break;
        }
    }
    case 2: {
        if (money >= C[2].cost)
        {
            money = money - C[2].cost;
            change(money);
            break;
        }
        else {
            cout << "Nepakankamas suma." << endl;
            break;
        }
    }
    case 3: {
        if (money >= C[3].cost)
        {
            money = money - C[3].cost;
            change(money);
            break;
        }
        else {
            cout << "Nepakankamas suma." << endl;
            break;
        }
    }
    case 4: {
        if (money >= C[4].cost)
        {
            money = money - C[4].cost;
            change(money);
            break;
        }
        else {
            cout << "Nepakankamas suma." << endl;
            break;
        }
    }
    default:
        break;
    }
}
int main()
{
    CoffeeMachine kavapart;
    kavapart.PrintCoffeeList();
    cout << line << endl;
    int money = 0, pasirinkimas = 0;
    while (true)
    {
        cout << "Kokia suma imesta i aparata(centais): ";
        cin >> money;
        if (money > 0) break;
        else cout << "Suma privalo buti teigiama" << endl;
    }
    while (true)
    {
        cout << "Pasirinkite kava: ";
        cin >> pasirinkimas;
        if (pasirinkimas <= 0 || pasirinkimas <= 4) break;
        else   cout << "Netinkamas pasirinkimas.";
    };
    kavapart.calculateChange(pasirinkimas, money);
    system("pause");
    return 0;
}