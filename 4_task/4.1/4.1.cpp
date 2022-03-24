// 4.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    string surname;
    int age;
public:
    void setName() { cin >> name; };
    void setSurname() { cin >> surname; };
    void setAge() { cin >> age; };
    string getName() { return name; };
    string getSurname() { return surname; };
    int getAge() { return age; };
};
class Student : public Person {
protected:
    int id;
    int n;
    string lectures[25];
    double averageGrade;
public:
    void setPersonalInfo();
    void setLectures();
    void setAverageGrade();
    void setId() { cin >> id; };
    void printInfo();


};
int main()
{   
    cout << "Uzduotis 4.1 by Andrius Stulgys" << endl;
    Student Student1;
    Student1.setPersonalInfo();
    Student1.printInfo();
    system("pause");
    
}

void Student::setPersonalInfo()
{
    cout << "Student name: ";
    setName();
    cout << "Student surname: ";
    setSurname();
    cout << "Student age: ";
    setAge();
    cout << "Student id:";
    setId();
    setLectures();
    setAverageGrade();
}

void Student::setLectures()
{
    cout << "Lectures that student atends." << endl;
    cout << "Lecture count: ";
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        int temp = i + 1;
        cout << "Lecture " << temp << " is: "<<endl;
        getline(std::cin, lectures[i]);
    }
}

void Student::setAverageGrade()
{
    cout << "Students average grade: ";
    cin >> averageGrade;
}

void Student::printInfo()
{
    cout << "Student name: " << getName() << endl;
    cout << "Student surname: " << getSurname() << endl;
    cout << "Student age: " << getAge() << endl;
    cout << "Student id: " << id << endl;
    cout << "Lectures that student attends:" << endl;
    for(int i=0; i<n; i++)
    {
        int temp = i + 1;
        cout << "Lecture " << temp << " " << lectures[i] << endl;
    }
    cout << "Students average grade: " << averageGrade << endl;
}
