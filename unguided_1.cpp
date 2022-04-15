#include <iostream>

using namespace std;

int main () {
    string dosen_si [10] = {"Pak Cepi", "Bu Citra", "Bu Ita",
                            "Pak Yogo", "Pak Yeri", "Bu Yos",
                            "Bu Sarah", "Bu Rakhma", "Bu tanti",
                            "Pak Yoka"};
    
    cout << "ALAMAT PADA VARIABEL" << endl << endl;

    cout << "alamat pada indeks 0 : " << &dosen_si [0] << endl << endl;

    cout << "alamat pada indeks 1 : " << &dosen_si [1] << endl << endl;

    cout << "alamat pada indeks 2 : " << &dosen_si [2] << endl << endl;

    cout << "alamat pada indeks 3 : " << &dosen_si [3] << endl <<endl;

    cout << "alamat pada indeks 4 : " << &dosen_si [4] << endl << endl;

    cout << "alamat pada indeks 5 : " << &dosen_si [5] << endl << endl;

    cout << "alamat pada indeks 6 : " << &dosen_si [6] << endl << endl;

    cout << "alamat pada indeks 7 : " << &dosen_si [7] << endl << endl;

    cout << "alamat pada indeks 8 : " << &dosen_si [8] << endl << endl;

    cout << "alamat pada indeks 9 : " << &dosen_si [9] << endl << endl << endl;

    string *pDosen_si;

    pDosen_si = dosen_si;

    cout << "NILAI YANG DIAMBIL DARI POINTER" << endl << endl;

    cout << "nilai pada indeks 0 : " << *pDosen_si << endl << endl;

    cout << "nilai pada indeks 1 : " << *(pDosen_si + 1) << endl << endl;

    cout << "nilai pada indeks 2 : " << *(pDosen_si + 2) << endl << endl;

    cout << "nilai pada indeks 3 : " << *(pDosen_si + 3) << endl << endl;

    cout << "nilai pada indeks 4 : " << *(pDosen_si + 4) << endl << endl;

    cout << "nilai pada indeks 5 : " << *(pDosen_si + 5) << endl << endl;

    cout << "nilai pada indeks 6 : " << *(pDosen_si + 6) << endl << endl;

    cout << "nilai pada indeks 7 : " << *(pDosen_si + 7) << endl << endl;

    cout << "nilai pada indeks 8 : " << *(pDosen_si + 8) << endl << endl;

    cout << "nilai pada indeks 9 : " << *(pDosen_si + 9) << endl << endl << endl;

    cout << "PERUBAHAN PADA NILAI VARIABEL" << endl << endl;

    *pDosen_si = "Bu Tenia";
    *(pDosen_si + 1) = "Pak Ramdani";
    *(pDosen_si + 2) = "Pak Zarip";
    *(pDosen_si + 3) = "Bu Fivy";
    *(pDosen_si + 4) = "Bu Vani";
    *(pDosen_si + 5) = "Bu Nur";
    *(pDosen_si + 6) = "Pak Irfan";
    *(pDosen_si + 7) = "Bu Teco";
    *(pDosen_si + 8) = "Pak Putra";
    *(pDosen_si + 9) = "Pak Hari";

    cout << "nilai pada indeks 0 : " << *pDosen_si << endl << endl;

    cout << "nilai pada indeks 1 : " << *(pDosen_si + 1) << endl << endl;

    cout << "nilai pada indeks 2 : " << *(pDosen_si + 2) << endl << endl;

    cout << "nilai pada indeks 3 : " << *(pDosen_si + 3) << endl << endl;

    cout << "nilai pada indeks 4 : " << *(pDosen_si + 4) << endl << endl;

    cout << "nilai pada indeks 5 : " << *(pDosen_si + 5) << endl << endl;

    cout << "nilai pada indeks 6 : " << *(pDosen_si + 6) << endl << endl;

    cout << "nilai pada indeks 7 : " << *(pDosen_si + 7) << endl << endl;

    cout << "nilai pada indeks 8 : " << *(pDosen_si + 8) << endl << endl;

    cout << "nilai pada indeks 9 : " << *(pDosen_si + 9) << endl << endl;

    return 0;

}