// 1.7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define N 25
using namespace std;

int main()
{
    int mas[N] = { 1, 2, 3, 4, 10, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 15, 17, 14, 19, 20, 21, 22, 20, 24, 1 };
    cout << "Naudojamas masyvas mas{";
    for(int i=0; i<N;i++)
    {
        cout << mas[i] << ", ";
    }
    cout << "};" << endl;
    cout << "Masyvo skaiciai kurie neatsikartoje masyve: ";
    for (int i = 0; i < N; i++)
    {   
        int temp1 = mas[i];
        int temp3=0; //atsiraktojimu skaiciavimui
        for (int j = 0; j < N; j++)
        {
            int temp2 = mas[j];
            if (temp1 == temp2)
            {
                temp3++;
            };
        }
        if (temp3 == 1)
            cout << temp1 <<" ";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
