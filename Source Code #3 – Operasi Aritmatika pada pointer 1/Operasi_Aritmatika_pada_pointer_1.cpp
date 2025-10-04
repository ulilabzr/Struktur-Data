#include <iostream>
using namespace std;

int main()
{
    int umur[] = {21, 22, 23, 24, 25};

    int *ptrUmur = umur;

    cout << "Alamat Umur [0] = " << &umur[0] << endl;
    cout << "Alamat Umur [1] = " << &umur[1] << endl;
    cout << "Alamat Umur [2] = " << &umur[2] << endl;
    cout << "Alamat Umur [3] = " << &umur[3] << endl;
    cout << "Alamat Umur [4] = " << &umur[4] << endl
         << endl;

    // nilai ptrUmur sebelum operasi penambahan dan penguarangan
    cout << "Nilai PtrUmur = " << ptrUmur << " sama dnegan alamat umur[0] {" << &umur[0] << "}" << endl;

    // Operasi Penambahan
    ptrUmur += 3;
    cout << "Nilai PtrUmur = " << ptrUmur << " sama dnegan alamat umur[3] {" << &umur[3] << "}" << endl;

    // Operasi Pengurangan
    ptrUmur -= 2;
    cout << "Nilai PtrUmur = " << ptrUmur << " sama dnegan alamat umur[1] {" << &umur[1] << "}" << endl;

    cout << endl;
    // system("pause");
    return 0;
}
