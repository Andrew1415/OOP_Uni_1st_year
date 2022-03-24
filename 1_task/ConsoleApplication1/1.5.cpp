#include <iostream>
using namespace std;
int main()
{
	long int n;
	cout << "Insert how many number you whant to get squered: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Skaiciaus " << i << " kvadratas yra " << i * i << ";" << endl;
	};
	return 0;
}