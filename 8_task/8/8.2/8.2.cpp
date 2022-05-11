// 8.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define Line "----------------------------------"
using namespace std;
class Worker {
private:
    string name;
    int age;
public:
    Worker() { name = "null"; age = 1000; };
    Worker(string name, int age) :name(name), age(age) {};
    void getName() { cout << "Vardas: " << name << endl; };
    void getAge() { cout << "Amzius: " << age << endl; };
    string returnName() { return name; };
    int returnAge() { return age; };
    void getAllInfo() { getName(); getAge(); };
    void changeInfo(string name, int age) { name = name; age = age; };
    ~Worker() {};
};
class Staff {
private:
    Worker Darbuotojas[10]{
        {"Jonas", 30},
        { "Kamile", 25},
        { "Augustinas", 22 },
        { "James", 18 },
        { "Camila", 45 },
        { "Nojus", 27 },
        { "Lukas", 37 },
        { "Jokubas", 26 },
        { "Aldona",67 },
        { "Airidas",20 }
    };
public:
    void sorting(int n, int m);
    void getAge_18_30();
    void getAge_31_50();
    void getAge_51_70();
    void getAge_71_up();
};
int main()
{
    void (Staff:: * fRod)();
    fRod = NULL;
    Staff Personalas;
    while (true)
    {
        cout << "Pasirinkite kurai grupe darbuotoju norite matyti:" << endl;
        cout << "Nr. 1 Amzius nuo 18 iki 30" << endl;
        cout << "Nr. 2 Amzius nuo 31 iki 50" << endl;
        cout << "Nr. 3 Amzius nuo 51 iki 70" << endl;
        cout << "Nr. 4 Amzius nuo 70" << endl;
        int option = 0;
        cout << "Iveskite pasirinkimo numeri:";
        cin >> option;
        switch (option)
        {
        case 1: fRod = &Staff::getAge_18_30; break;
        case 2: fRod = &Staff::getAge_31_50; break;
        case 3: fRod = &Staff::getAge_51_70; break;
        case 4: fRod = &Staff::getAge_71_up; break;
        default: 
            cout << Line << endl << "Pasirinkimas neteisingas, prasom pasirinkti dar karta." << endl << Line << endl;
            break;
        }
        if (option > 0 && option < 5)
        {
            cout << Line << endl;
            (Personalas.*fRod)();
            cout << Line << endl;
        }
        string opt;
        cout << "Ar norite pasirinkti darkarta? (Y/N)";
        cin >> opt;
        cout << Line << endl;
        if (opt == "N" || opt == "n") break;
        else { cout << Line << endl << "Pasirinkimas neteisingas, prasom pasirinkti dar karta." << endl << Line << endl; }
        system("CLS");
    }
    system("pause");
    return 0;
}

void Staff::sorting(int n, int m)
{
    Worker Darbuotojas2[10];
    for (int i = 0; i < 10; i++)
    {
        if (Darbuotojas[i].returnAge() < m && Darbuotojas[i].returnAge() > n)
        {
            Darbuotojas2[i] = Darbuotojas[i];
            
        }
    }
    for (int j = 0; j < 9; j++)
        for (int k = j; k < 10; k++)
        {
            if (Darbuotojas2[j].returnAge() > Darbuotojas2[k].returnAge())
            {
                swap(Darbuotojas2[j], Darbuotojas2[k]);
            }
        }
    cout << Line << endl;
    cout << "Personalas kurio amzius nuo" << n << " iki " << m << ":" << endl;
    for (int i=0; i<10;i++)
    {
        if (Darbuotojas2[i].returnName() != "null")
        {
            Darbuotojas2[i].getAllInfo();
        }
            
    }
    cout << Line << endl;
}

void Staff::getAge_18_30()
{
    sorting(17,31);
}
void Staff::getAge_31_50()
{
    sorting(30, 51);
}

void Staff::getAge_51_70()
{
    sorting(50, 71);
}

void Staff::getAge_71_up()
{
    sorting(70, 100);
}
