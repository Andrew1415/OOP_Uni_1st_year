// 6.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Age_Error {
private:
    string error="Error";
public:
    Age_Error(string error) :error(error) {};
    string getError() { return error; };
};

class Years_Worked_Error {
private:
    string error = "Error";
public:
    Years_Worked_Error(string error) :error(error) {};
    string getError() { return error; };
};

class Salary_Error {
private:
    string error = "Error";
public:
    Salary_Error(string error) :error(error) {};
    string getError() { return error; };
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
    catch (Age_Error& John) {
        cerr << John.getError() << endl;
    }
    catch (Years_Worked_Error& John) {
        cerr << John.getError() << endl;
    }
    catch (Salary_Error& John) {
        cerr << John.getError() << endl;
    };
    system("pause");
    return 0;
}

void Worker::Check() {
    if (age < 18 || age > 70)
        throw Age_Error("Workers age should be between 18-70.");
    if (yearsWorked > age - 18)
        throw Years_Worked_Error("Workers experience can't be more that his age - 18.");
    if (salary < 500)
        throw Salary_Error("Workers salary can't be belove 500 euros.");
}

