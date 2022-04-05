// 6.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Error {
private:
    string error = "Error";
public:
    string getError() { return error; };
    Error(string error) :error(error) {};
};


class Worker {
private:
    int age;
    int yearsWorked;
    double salary;
public:
    void Check();
    Worker(int age, int yearsWorked, double salary) :age(age), yearsWorked(yearsWorked), salary(salary) { Check(); };

};

int main()
{
    cout << "Uzduotis 6.3 by Andrius Stulgys" << endl;
    int age, yearsWorked;
    double salary;
    cout << "Workers age: ";
    cin >> age;
    cout << "Workers experience: ";
    cin >> yearsWorked;
    cout << "Workers salary: ";
    cin >> salary;
    try {
        Worker John(age, yearsWorked, salary);
        cout << "Information about the worker is correct." << endl;
    }
    catch (Error& John) {
        cerr << John.getError() << endl;
    }
    system("pause");
    return 0;
}

void Worker::Check() {
    if (age < 18 || age > 70)
        throw Error("Workers age should be between 18-70.");
    if (yearsWorked > age - 18)
        throw Error("Workers experience can't be more that his age - 18.");
    if (salary < 500)
        throw Error("Workers salary can't be belove 500 euros.");
}

