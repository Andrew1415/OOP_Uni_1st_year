// 2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Darbuotojas {
public:
	int amzius;
	int patirtis;
	int atlyginimas;
};
int main() {
	cout << "Uzduotis 2.1 by Andrius Stulgys" << endl;
	Darbuotojas Worker;
	Worker.amzius = 27;
	Worker.patirtis = 5;
	Worker.atlyginimas = 1035;
	cout << "Darbuotojas kurio amzius yra: " << Worker.amzius << " metai." << endl;
	cout << "Sio darbuotojo patirtis yra: "<<Worker.patirtis<< " metai." << endl;
	cout << "Sis darbuotojas uzdirba: " << Worker.atlyginimas << " Eur." << endl;
	system("Pause");
	return 0;
} 
