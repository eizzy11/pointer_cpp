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

    cout << "Nilai dari variabel sebelum ada perubahan" << endl << endl;

    cout << "Nilai jumlah : " << *pJumlah << endl << endl;

    cout << "Nilai negara : " << *pNegara << endl << endl;

    cout << "Nilai volume : " << *pVolume << endl << endl;

    cout << "Nilai sehat : " << *pSehat << endl << endl;

    cout << "Nilai dari variabel setelah ada perubahan" << endl << endl;

    *pJumlah = 191;
    *pNegara = "England";
    *pVolume = 0.125;
    *pSehat = false;

    cout << "Nilai jumlah : " << *pJumlah << endl << endl;

    cout << "Nilai negara : " << *pNegara << endl << endl;

    cout << "Nilai volume : " << *pVolume << endl << endl;

    cout << "Nilai sehat : " << *pSehat << endl << endl;


    return 0;
}