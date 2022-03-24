// 2.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define N 5
using namespace std;
class Student {
private:
    string name;
    string surname;
    int credit[N];
    int grade[N];
    double averageGrade;
public:
    Student(string temp1, string temp2);
    void insertCreditsAndGrades();
    void average();
    void print();
};
int main()
{
    cout << "Uzduotis 2.6 by Andrius Stulgys" << endl;
    Student Studentas1("Jonas", "Petraitis");
    Studentas1.print();
    system("pause");
    return 0;
}

Student::Student(string temp1, string temp2)
{
    cout << "Vykdomas konstruktorius: " << endl;
    cout << "----------------------------------------" << endl;
    name = temp1;
    surname = temp2;
    insertCreditsAndGrades();
    average();
    cout << "----------------------------------------" << endl;
}

void Student::insertCreditsAndGrades()
{
    cout << "Studento studijuojamo dalyko kreditas ir pazimys: " << endl;
    cout << "Ivedamas kreditas privalo buti tarp 3 ir 6." << endl << "Ivedamas pazimys turi buti tarp 0 ir 10." << endl;
    for (int i = 0; i < N; i++)
    {
        int temp1 = i+1;
        cout << "Dalykas " << temp1 << endl << "kreditai:";
        cin >> credit[i];
        cout << "Pazimys: ";
        cin >> grade[i];
        cout << endl;
    }
}

void Student::average()
{
    int temp1 = 0, temp2 = 0;
    for(int i=0; i<N; i++)
    {
        temp1 = temp1 + (credit[i] * grade[i]);
        temp2 = temp2 + credit[i];
    }
    averageGrade = temp1 / temp2;
}

void Student::print()
{
    cout << "----------------------------------------" << endl;
    cout << "Studentas: " << name << " " << surname << endl;
    cout << "Studento vidurkis: " << averageGrade << endl;
    cout << "Studento kreditai ir pazymiai:" << endl;
    for (int i = 0; i < N; i++)
    {
        int temp = i+1;
        cout << "Dalykas " << i << endl;
        cout << "Kreditai: " << credit[i] << endl;
        cout << "Ivertinimas: " << grade[i] << endl;
    };
    cout << "----------------------------------------" << endl;
    
}
