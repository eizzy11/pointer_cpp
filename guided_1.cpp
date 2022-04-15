#include <iostream>

using namespace std;

int main () {
    
    int jumlah = 30;
    string negara = "Indonesia";
    float volume = 17.25;
    bool sehat = true;

    cout << "Alamat variabel jumlah : " << &jumlah << endl << endl;

    cout << "Alamat variabel negara : " << &negara << endl << endl;

    cout << "Alamat variabel volume : " << &volume << endl << endl;

    cout << "Alamat variabel sehat : " << &sehat << endl << endl;

    return 0;
}