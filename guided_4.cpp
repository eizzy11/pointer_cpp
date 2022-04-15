#include <iostream>

using namespace std;

int jumlah = 30;
string negara = "Indonesia";
float volume = 17.25;
bool sehat = true;

int *pJumlah;
string *pNegara;
float *pVolume;
bool *pSehat;

int main()
{
    pJumlah = &jumlah;
    pNegara = &negara;
    pVolume = &volume;
    pSehat = &sehat;

    cout << &jumlah << endl;
    cout << &negara << endl;
    cout << &volume << endl;
    cout << &sehat << endl;

    cout << pJumlah << endl;
    cout << pNegara << endl;
    cout << pVolume << endl;
    cout << pSehat << endl;

    cout << pJumlah + 2 << endl;
    cout << pNegara + 2 << endl;
    cout << pVolume + 2 << endl;
    cout << pSehat + 2 << endl;

    cout << pJumlah + 3 << endl;
    cout << pNegara + 3 << endl;
    cout << pVolume + 3 << endl;
    cout << pSehat - 3 << endl;

    return 0;

}