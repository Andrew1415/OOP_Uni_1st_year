// 2.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Figure {
public:
	Figure(int _skt, bool taisyk);
	void print();
private:
	int briaunuSkt;
	bool taisyklingumas;
};
int main()
{
	cout<<"Uzduotis 2.5 by Andrius Stulgys"
	Figure Figura1(5,0);
	Figure Figura2(6,1);
	Figura1.print();
	Figura2.print();
	system("pause");
	return 0;

}

Figure::Figure(int _skt, bool taisyk)
{
	briaunuSkt = _skt;
	taisyklingumas = taisyk;
	cout << "Vykdomas konstruktorius" << endl;
}

void Figure::print()
{
	cout << "----------------------------------------" << endl;
	cout << "Briaunu skaicius: " << briaunuSkt << endl;
	cout << "Taisyklingumas: ";
	if (taisyklingumas) cout << " taisyklinga" << endl;
	else cout << "netaisyklinga" << endl;
	cout << "----------------------------------------" << endl;
}
