// 2.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Darbuotojas {
public:
	int get_amzius();
	int get_patirtis();
	double get_atlyginimas();
	double get_pajemu_mokestis();
	double get_sodros_mokestis();
	void insert_amzius(int metai1);
	void insert_patirtis(int metai2);
	void insert_atlyginimas(double eur);
	void calculate_pajemu_mokestis();
	void calculate_sodros_mokestis();
	double get_po_mokesciu();

private:
	int amzius;
	int patirtis;
	double atlyginimas;
	double pajemu_mokestis;
	double sodros_mokestis;
};
int Darbuotojas::get_amzius()
{
	return amzius;
}
int Darbuotojas::get_patirtis()
{
	return patirtis;
}
double Darbuotojas::get_atlyginimas()
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
void Darbuotojas::insert_atlyginimas(double eur)
{
	atlyginimas = eur;
}

void Darbuotojas::calculate_pajemu_mokestis()
{
	pajemu_mokestis = atlyginimas * 0.15;
}

void Darbuotojas::calculate_sodros_mokestis()
{
	sodros_mokestis = atlyginimas * 0.09;
}

double Darbuotojas::get_po_mokesciu()
{
	double after;
	after = atlyginimas - pajemu_mokestis - sodros_mokestis;
	return after;
}

double Darbuotojas::get_pajemu_mokestis()
{
	return pajemu_mokestis;
}

double Darbuotojas::get_sodros_mokestis()
{
	return sodros_mokestis;
}


int main() {
	cout << "Uzduotis 2.4 by Andrius Stulgys" << endl;
	int amzius = 0, patirtis = 0;
	double atlyginimas = 0;
	cout << "Darbuotojo amzius: ";
	cin >> amzius;
	cout << "Darbuotojo patirtis: ";
	cin >> patirtis;
	cout << "Darbuotojo atlyginimas: ";
	cin >> atlyginimas;
	Darbuotojas Worker;
	Worker.insert_amzius(amzius);
	Worker.insert_patirtis(patirtis);
	Worker.insert_atlyginimas(atlyginimas);
	Worker.calculate_pajemu_mokestis();
	Worker.calculate_sodros_mokestis();
	cout << "Darbuotojas kurio amzius yra: " << Worker.get_amzius() << " metai." << endl;
	cout << "Sio darbuotojo patirtis yra: " << Worker.get_patirtis() << " metai." << endl;
	cout << "Sis darbuotojas uzdirba: " << Worker.get_atlyginimas() << " Eur." << endl;
	cout << "Uz gautas pajemas sumoketi mokesciai: " << Worker.get_pajemu_mokestis() << " Eur." << endl;
	cout << "Uz gautas pajemas sodrai sumoketa: " << Worker.get_sodros_mokestis() << " Eur." << endl;
	cout << "Atlyginimas i rankas: " << Worker.get_po_mokesciu() << " Eur." << endl;
	system("Pause");
	return 0;
}