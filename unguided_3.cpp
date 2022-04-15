#include <iostream>
#include <windows.h>

using namespace std;

int panjangArray;
int *pointerTinggi;
char lagi = 't';
bool keluar = false;

int main () {
    do {
        cout << "Masukkan panjang array : ";
        cin >> panjangArray;
        pointerTinggi = new int [panjangArray];

        for (int n = 0; n < panjangArray; n++) {
            pointerTinggi [n] = 13 + n;
            cout << pointerTinggi[n] << endl;
        }
        cout << "Lagi (y/t) ? ";
        cin >> lagi;

        if (lagi == 'y' || lagi == 'Y') {
            system("CLS");
        }else{
            keluar = true;
        }
    } while (keluar == false);

    return 0;    
}

/*
panjangArray = 3
pointerTinggi
for (int n = 0; n < panjangArray; n++) {
    int n = 0; 0 < 3; n++
    pointerTinggi [n] = 13 + n;
    [0] = 13 + 0;
    cout << pointerTinggi[n] << endl;
    cout << 13

for (int n = 0; n < panjangArray; n++) {
    int n = 1; 1 < 3; n++
    pointerTinggi [n] = 13 + 1;
    [1] = 13 + 1;
    cout << pointerTinggi[n] << endl;
    cout << 14

for (int n = 2; n < panjangArray; n++) {
    int n = 2; 2 < 3; n++
    pointerTinggi [n] = 13 + n;
    [2] = 13 + 2;
    cout << pointerTinggi[n] << endl;
    cout << 15

for (int n = 0; n < panjangArray; n++) {
    int n = 3; 3 < 3; false

*/