// 3.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Atlyginimas_bruto {
private:
    double atlyginimas_popierius;
    double darbdavio_mokestis;
    double sodra_mokestis;
    double pajemu_mokestis;
    double atlyginimas_rankas;
public:
    void insert_atlyginimas(double eur2);
    void count_darbdavio_mokestis();
    void count_sodra_mokestis();
    void count_pajemu_mokestis();
    void count_atlyginimas_rankas();
    double get_darbdavio_mokestis() { return darbdavio_mokestis; };
    double get_sodra_mokestis() { return sodra_mokestis; };
    double get_pajemu_mokestis() { return pajemu_mokestis; };
    double get_atlyginimas_rankas() { return atlyginimas_rankas; };
    void info();
};
class Darbuotojas {
private:
    int amzius;
    int patirtis;
    double atlyginimas;
public:
    void insert_amzius(int metai1);
    void insert_patirtis(int metai2);
    void insert_atlyginimas(double eur);
    double get_atlyginimas() { return atlyginimas; };
    void info();
};

int main()
{
    cout << "Unzduotis 3.2 by Andrius Stulgys\n";
    int metai1, metai2, eur;
    cout << "Darbuotojo amzius: ";
    cin >> metai1;
    cout << "Darbuotojo patirtis: ";
    cin >> metai2;
    cout << "Darbuotojo atlyginimas ant popieriaus: ";
    cin >> eur;
    Darbuotojas Worker;
    Worker.insert_amzius(metai1);
    Worker.insert_patirtis(metai2);
    Worker.insert_atlyginimas(eur);
    Atlyginimas_bruto Atlyginimas;
    Atlyginimas.insert_atlyginimas(Worker.get_atlyginimas());
    Atlyginimas.count_darbdavio_mokestis();
    Atlyginimas.count_sodra_mokestis();
    Atlyginimas.count_pajemu_mokestis();
    Atlyginimas.count_atlyginimas_rankas();
    Worker.info();
    Atlyginimas.info();
    system("pause");
    return 0;
}

void Atlyginimas_bruto::insert_atlyginimas(double eur2)
{
    atlyginimas_popierius = eur2;
}

void Atlyginimas_bruto::count_darbdavio_mokestis()
{
    darbdavio_mokestis = atlyginimas_popierius * 0.3117;
}

void Atlyginimas_bruto::count_sodra_mokestis()
{
    sodra_mokestis = (atlyginimas_popierius - darbdavio_mokestis) * 0.09;
}

void Atlyginimas_bruto::count_pajemu_mokestis()
{
    pajemu_mokestis = (atlyginimas_popierius - darbdavio_mokestis) * 0.15;
}

void Atlyginimas_bruto::count_atlyginimas_rankas()
{
    atlyginimas_rankas = atlyginimas_popierius - darbdavio_mokestis - sodra_mokestis - pajemu_mokestis;
}

void Atlyginimas_bruto::info()
{
    cout << endl;
    cout << "Atlyginimas ant popieriaus: " << atlyginimas_popierius << endl;
    cout << "Darbdavio mokami mokesciai: " << darbdavio_mokestis << endl;
    cout << "Pajemu mokestis: " << pajemu_mokestis << endl;
    cout << "Sodros mokestis: " << sodra_mokestis << endl;
    cout << "Atlyginimas i rankas: " << atlyginimas_rankas << endl;
    cout << endl;
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

void Darbuotojas::info()
{
    cout << endl;
    cout << "Darbuotojo amzius: " << amzius << endl;
    cout << "Darbuotojo patirtis: " << patirtis << endl;
    cout << "Darbuotojo atlyginimas: " << atlyginimas << endl;
}
