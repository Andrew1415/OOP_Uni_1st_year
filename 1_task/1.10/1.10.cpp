// 1.10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int x;
    bool primeNumber = true;

    cout << "Enter a positive integer: ";
    cin >> x;

    if (x == 0 || x == 1) {
        primeNumber = false;
    }
    else {
        for (int i = 2; i <= x / 2; ++i) {
            if (x % i == 0) {
                primeNumber = false;
                break;
            }
        }
    }
    if (primeNumber)
        cout << x << " is a prime number" << endl;
    else
        cout << x << " is not a prime number" << endl;

    return 0;
}
