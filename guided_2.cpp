#include <iostream>

using namespace std;

int main () {
    int jumlah = 30;
    string negara = "Indonesia";
    float volume = 17.25;
    bool sehat = true;

    int *pJumlah;
    string *pNegara;
    float *pVolume;
    bool *pSehat;

    pJumlah = &jumlah;
    pNegara = &negara;
    pVolume = &volume;
    pSehat = &sehat;

    cout << "Nilai dari pointer jumlah : " << *pJumlah << endl << endl;

    cout << "Nilai dari pointer negara : " << *pNegara << endl << endl;

    cout << "Nilai dari pointer volume : " << *pVolume << endl << endl;

    cout << "Nilai dari pointer sehat : " << *pSehat << endl << endl;

    return 0;
}