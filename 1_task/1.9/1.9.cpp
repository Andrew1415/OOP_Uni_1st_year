// 1.9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
long int Fact(int n)
{
    if (n == 0) return 1;
    else return Fact(n - 1) * n;
}
int main()
{
    int x;
    cout << "Insert wich numbers factorial do you want to calculate: ";
    cin >> x;
    cout << "Factorial of " << x << " is " << Fact(x);
    return 0;

}