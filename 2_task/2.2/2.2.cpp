// 2.2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;
class Darbuotojas {
public:
	int get_amzius();
	int get_patirtis();
	int get_atlyginimas();
	void insert_amzius(int metai1);
	void insert_patirtis(int metai2);
	void insert_atlyginimas(int eur);
private:
	int amzius;
	int patirtis;
	int atlyginimas;
};
int Darbuotojas::get_amzius()
{
	return amzius;
}
int Darbuotojas::get_patirtis()
{
	return patirtis;
}
int Darbuotojas::get_atlyginimas()
{
	return atlyginimas;
}
void Darbuotojas::insert_amzius(int metai1)
{
	amzius = metai1;
}
void Darbuotojas::insert_patirtis(int metai2)
{
	patirtis = metai2;
}
void Darbuotojas::insert_atlyginimas(int eur)
{
	atlyginimas = eur ; 
}

int main() {
	cout << "Uzduotis 2.2 by Andrius Stulgys" << endl;
	Darbuotojas Worker;
	Worker.insert_amzius(27);
	Worker.insert_patirtis(5);
	Worker.insert_atlyginimas(1035);
	cout << "Darbuotojas kurio amzius yra: " << Worker.get_amzius() << " metai." << endl;
	cout << "Sio darbuotojo patirtis yra: " << Worker.get_patirtis() << " metai." << endl;
	cout << "Sis darbuotojas uzdirba: " << Worker.get_atlyginimas() << " Eur." << endl;
	system("Pause");
	return 0;
}