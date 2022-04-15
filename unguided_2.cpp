#include <iostream>

using namespace std;

int beratBadan[5] = {80, 131, 155, 98, 173};
int *pointerBeratBadanA;
int *pointerBeratBadanB;

int main()
{
    pointerBeratBadanB = beratBadan;
    pointerBeratBadanA = pointerBeratBadanB;

    cout<<pointerBeratBadanB<<endl;
    cout<<pointerBeratBadanB + 1<<endl;
    cout << endl;
    cout<<*pointerBeratBadanB<<endl;
    cout << endl;
    cout<<*pointerBeratBadanB + 1<<endl;
    cout<<*(pointerBeratBadanB + 1)<<endl;
    cout << endl;

    /*
    A. Jawbannya beda pada baris
    cout<<*pointerBeratBadanB + 1<<endl;
    merupakan nilai dari variabel yang diambil
    menggunakan pointer
    *pointerBeratBadanB = 80 
    *pointerBeratBadanB + 1 = 80 + 1 = 81 
    */
    
    *(pointerBeratBadanB + 1) = 109;

    /*
    B. Data yang berubah adalah data yang terletak
    pada indeks ke [2]
    pointerBeratBadanB + 1 artinya data terletak pada
    indeks 0 + 1
    pointerBeratBadanB + 1 = 131
    dilakukan perubahan nilai
    pointerBeratBadanB = 109
    */
    
    cout<<*(pointerBeratBadanB + 1)<<endl;
    
    return 0;
}