// 8.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define Line {cout<<"----------------------------------"<<endl;}
//#define Line "----------------------------------"
using namespace std;
class Worker {
private:
    string name;
    int age;
    double salary;
    int xp;
public:
    Worker(string name, int age, double salary, int xp) :name(name), age(age), salary(salary), xp(xp) {};
    void getName() { cout << "Vardas: " << name << endl; };
    void getAge() { cout << "Amzius: " << age << endl; };
    void getSalary() { cout << "Atlyginimas: " << salary << endl; };
    void getXp() { cout << "Patirtis: " << xp << endl; };
    string returnName() { return name; };
    int returnAge() { return age; };
    double returnSalary() { return salary; };
    int returnXp() { return xp; };
    void getAllInfo() { getName(); getAge(); getSalary(); getXp(); };
    ~Worker() {};
};
class Staff {
private:
    Worker Darbuotojas[10]{
        {"Jonas", 30, 2500, 5},
        { "Kamile", 25, 1374, 1},
        { "Augustinas", 22, 990, 1},
        { "James", 18, 823, 0},
        { "Camila", 45, 6452, 15},
        { "Nojus", 27, 2158, 4},
        { "Lukas", 37, 4598, 12},
        { "Jokubas", 26, 1742, 3},
        { "Aldona",67, 4296, 30},
        { "Airidas",20, 983, 1}
    };
public:
    void sorting(int n, int m);
    void byAge();
    void bySalary();
    void byXp();
};
int main()
{
    Line;
    void (Staff:: * fRod)();
    fRod = NULL;
    Staff Personalas;
    while (true)
    {
        cout << "Pasirinkite kurai grupe darbuotoju norite matyti:" << endl;
        cout << "Nr. 1 Paieska pagal amziu." << endl;
        cout << "Nr. 2 Paieska pagal atlyginima." << endl;
        cout << "Nr. 3 Paieska pagal patirty." << endl;
        int option = 0;
        cout << "Iveskite pasirinkimo numeri:";
        cin >> option;
        switch (option)
        {
        case 1: fRod = &Staff::byAge; break;
        case 2: fRod = &Staff::bySalary; break;
        case 3: fRod = &Staff::byXp; break;
        default:
            Line;
            cout << endl << "Pasirinkimas neteisingas, prasom pasirinkti dar karta." << endl; 
            Line;
            break;
        }
        if (option > 0 && option < 4)
        {
            Line;
            (Personalas.*fRod)();
            Line;
        }
        string opt;
        cout << "Ar norite pasirinkti darkarta? (Y/N)";
        cin >> opt;
        Line;
        if (opt == "N" || opt == "n") break;
        else { Line; cout << endl << "Pasirinkimas neteisingas, prasom pasirinkti dar karta." << endl; Line; }
        system("CLS");
    }
    system("pause");
    return 0;
}
void Staff::byAge() 
{
    Line;
    int min, max;
    cout << "Amziaus paieska. Iveskite amziaus ribas." << endl;
    cout << "Nuo:";
    cin >> min;
    cout << "Iki:";
    cin >> max;
    Line;
    if (max < min)
    {
        swap(max, min);
    };
    if (min < 0)
    {
        min = 0;
    };
    int temp = 0;
    for (int i = 0; i < 10; i++)
    {
        if (Darbuotojas[i].returnAge() >= min && Darbuotojas[i].returnAge() <= max)
        {   
            temp++;
            Line;
            cout << "Nr. " << temp << endl;
            Darbuotojas[i].getAllInfo();
            Line;
        }
    };
    if (temp == 0)
    {
        cout << "Sioje ryboje nera duomenu, bandykite darkarta." << endl;
    }
    Line;
}
void Staff::bySalary()
{
    Line;
    int min, max;
    cout << "Atlyginimo paieska. Iveskite atlyginimo ribas." << endl;
    cout << "Nuo:";
    cin >> min;
    cout << "Iki:";
    cin >> max;
    Line;
    if (max < min)
    {
        swap(max, min);
    };
    if (min < 0)
    {
        min = 0;
    };
    int temp = 0;
    for (int i = 0; i < 10; i++)
    {
        if (Darbuotojas[i].returnSalary() >= min && Darbuotojas[i].returnSalary() <= max)
        {
            temp++;
            Line;
            cout << "Nr. " << temp << endl;
            Darbuotojas[i].getAllInfo();
            Line;
        }
    };
    if (temp == 0)
    {
        cout << "Sioje ryboje nera duomenu, bandykite darkarta." << endl;
    }
    Line;

}
void Staff::byXp()
{
    Line;
    int min, max;
    cout << "Patirties paieska. Iveskite patirties ribas." << endl;
    cout << "Nuo:";
    cin >> min;
    cout << "Iki:";
    cin >> max;
    Line;
    if (max < min)
    {
        swap(max, min);
    };
    if (min < 0)
    {
        min = 0;
    };
    int temp = 0;
    for (int i = 0; i < 10; i++)
    {
        if (Darbuotojas[i].returnXp() >= min && Darbuotojas[i].returnXp() <= max)
        {
            temp++;
            Line;
            cout << "Nr. " << temp << endl;
            Darbuotojas[i].getAllInfo();
            Line;
        }
    };
    if (temp == 0)
    {
        cout << "Sioje ryboje nera duomenu, bandykite darkarta." << endl;
    }
    Line;
}