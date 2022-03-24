// 1.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    long long int x;
    cout << "Insert your integer: ";
    cin >> x;
    if (x < 0) x = x * (-1);
    int temp=0;
    int divider = 10;
    while (x != 0)
    {
        temp = temp + x % 10;
        x = x - x % 10;
        x = x / 10;
    }
    cout << "The sum of every number in your given integer: " << temp;
    return 0;
}
