// 8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define Line "-----------------------------------------"
using namespace std;
class Worker {
private:
    string name;
    string surname;
    string specialty;
    int age;
    int xp;
    double salary;
public:
    void getName() { cout <<"Vardas: " << name << endl;};
    void getSurname() { cout << "Pavarde: " << surname << endl; };
    void getSpecialty() { cout << "Specialybe: " << specialty << endl; };
    void getAge() { cout << "Amzius: " << age << endl; };
    void getXp() { cout << "Patirtis: " << xp << endl; };
    void getSalary() { cout << "Atlyginimas: " << salary << endl; };
    void getAllInfo() { getName(); getSurname(); getSpecialty(); getAge(); getXp(); getSalary(); };
    void setName() { cout << "Vardas: "; cin >> name; };
    void setSurname() { cout << "Pavarde: "; cin >> surname; };
    void setSpecialty() { cout << "Specialybe: "; cin >> specialty; };
    void setAge() { cout << "Amzius: "; cin >> age; };
    void setXp() { cout << "Patirtis: "; cin >> xp; };
    void setSalary() { cout << "Alga: "; cin >> salary; };
    Worker() { name = "Null"; surname = "Null"; specialty = "Null"; age = 0; xp = 0; salary = 0; };

};
int main()
{
    cout << "Hello World!\n";
    void (Worker:: * fRod)();
    fRod = NULL;
    Worker* Darbuotojas;
    Darbuotojas = new Worker;
    while (true)
    {
        int option = 0;
        cout << Line << endl;
        cout << Line << endl;
        Darbuotojas->getAllInfo();
        cout << Line << endl;
        cout << Line << endl;
        cout << "Pasirinkite ka ivesti apie darbuotoja:" << endl;
        cout << "Nr. 1 Vardas" << endl;
        cout << "Nr. 2 Pavarde" << endl;
        cout << "Nr. 3 Specialybe" << endl;
        cout << "Nr. 4 Amzius" << endl;
        cout << "Nr. 5 Patirtis" << endl;
        cout << "Nr. 6 Atlyginimas" << endl;
        cout << Line << endl;
        cout << "Iveskite pasirinkimo numeri: ";
        cin >> option;
        cout << Line << endl;
        if (option > 0 && option < 7)
        {
            switch (option)
            {
            case 1: fRod = &Worker::setName; break;
            case 2: fRod = &Worker::setSurname; break;
            case 3: fRod = &Worker::setSpecialty; break;
            case 4: fRod = &Worker::setAge; break;
            case 5: fRod = &Worker::setXp; break;
            case 6: fRod = &Worker::setSalary; break;
            default:
                break;
            }
            cout << Line << endl;
            (Darbuotojas->*fRod)();
            cout << Line << endl;
            
        }
        string opt;
        cout << "Ar norite pasirinkti darkarta? (Y/N)";
        cin >> opt;
        cout << Line << endl;
        if (opt == "N" || opt == "n") break;
        else { cout << Line << endl << "Pasirinkimas neteisingas, prasom pasirinkti darkarta." << endl << Line << endl; }
        system("CLS");
    };
    system("CLS");
    while (true)
    {
        int option = 0;
        cout << Line << endl;
        cout << "Pasirinkite ka norite suzinoti apie darbuotoja:" << endl;
        cout << "Nr. 1 Vardas" << endl;
        cout << "Nr. 2 Pavarde" << endl;
        cout << "Nr. 3 Specialybe" << endl;
        cout << "Nr. 4 Amzius" << endl;
        cout << "Nr. 5 Patirtis" << endl;
        cout << "Nr. 6 Atlyginimas" << endl;
        cout << "Nr. 7 Gauti visa darbuotojo info" << endl;
        cout << Line << endl;
        cout << "Iveskite pasirinkimo numeri: ";
        cin >> option;
        cout << Line << endl;
        if (option > 0 && option < 8)
        {
            switch (option)
            {
            case 1: fRod = &Worker::getName; break;
            case 2: fRod = &Worker::getSurname; break;
            case 3: fRod = &Worker::getSpecialty; break;
            case 4: fRod = &Worker::getAge; break;
            case 5: fRod = &Worker::getXp; break;
            case 6: fRod = &Worker::getSalary; break;
            case 7: fRod = &Worker::getAllInfo; break;
            default:
                break;
            }
            cout << Line << endl;
            (Darbuotojas->*fRod)();
            cout << Line << endl;
            
        }
        string opt;
        cout << "Ar norite pasirinkti darkarta? (Y/N)";
        cin >> opt;
       cout << Line << endl;
        if (opt == "N" || opt == "n") break;
        else { cout << Line << endl << "Pasirinkimas neteisingas, prasom pasirinkti darkarta." << endl << Line << endl; }
        system("CLS");
    };
    system("pause");
    return 0;
}