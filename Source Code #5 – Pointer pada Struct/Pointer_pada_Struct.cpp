#include <iostream>
#include <cstring> // untuk fungsi strcpy()
using namespace std;

struct Mahasiswa
{
    char nim[11];
    int nilai;
};

int main()
{
    Mahasiswa mhs;

    // akses elemen struct untuk var non-pointer
    // menggunakan notasi titik
    strcpy(mhs.nim, "23.61.0258");
    mhs.nilai = 70;

    cout << "NIM = " << mhs.nim << ", nilai = " << mhs.nilai << endl
         << endl;

    Mahasiswa *ptrMhs;
    ptrMhs = &mhs;

    // akses elemen struct untuk var pointer
    // menggunakan notasi tanda panah (->)
    strcpy(ptrMhs->nim, "23.61.0259");
    ptrMhs->nilai = 100;

    cout << "NIM = " << mhs.nim << ", nilai = " << mhs.nilai << endl;
    cout << "NIM = " << ptrMhs->nim << ", nilai = " << ptrMhs->nilai << endl;

    cout << endl
         << endl;

    return 0;
}
