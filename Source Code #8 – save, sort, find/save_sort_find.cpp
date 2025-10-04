#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

struct Mahasiswa
{
    string nama;
    string nim;
    int nilai;
};

bool bandingnilai(const Mahasiswa &a, const Mahasiswa &b)
{
    return a.nilai > b.nilai;
}
int jml;
void find()
{
    string kata;
    cout << "Cari NIM : ";
    cin >> kata;
    bool found = false;
    for (int i = 0; i < n; ++i)
    {
        if (kata == mhs[i].nim)
        {
            cout << "\nData " << kata << " Ditemukan\n";
            cout << "NIM   : " << mhs[i].nim << endl;
            cout << "Nama  : " << mhs[i].nama << endl;
            cout << "Nilai : " << mhs[i].nilai << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Data Tidak Ditemukan\n";
    }
}

void sort()
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (mhs[i].nim > mhs[j].nim)
            {
                Mahasiswa temp = mhs[i];
                mhs[i] = mhs[j];
                mhs[j] = temp;
            }
        }
    }

    cout << "        Data Setelah Diurutkan          \n";

    for (int i = 0; i < jml; ++i)
    {
        Mahasiswa *mhs = new Mahasiswa[jml];
        cout << "Nama   : " << mhs[i].nim;
        cout << "NIM    : " << mhs[i].nama;
        cout << "NIlai  : " << mhs[i].nilai << endl;
    }
    cout << "+======================================+\n";
}

int main()
{

    int nilai, choice;
    cout << "Masukkan Jumlah Mahasiswa : ";
    cin >> jml;
    cout << endl;

    Mahasiswa *mhs = new Mahasiswa[jml];

    for (int i = 0; i < jml; i++)
    {
        cout << "Masukkan data Mahasiswa ke -" << i + 1 << " : ";
        cout << "Nama   : ";
        cin >> mhs[i].nama;
        cout << "NIM    : ";
        cin >> mhs[i].nim;
        cout << "Nilai  : ";
        cin >> mhs[i].nilai;
    }

    sort(mhs, mhs + jml, bandingnilai);

    cout << "Pilih operasi yang ingin dilakukan :\n";
    cout << "1. Sort";
    cout << "2. Find" << endl
         << endl;

    cout << "Pilih : ";
    cin >> choice;

    switch (choice)
    {
    // case 1:
    //     sort(jml);
    //     break;
    // case 3:
    //     find(jml);
    //     break;
    default:
        cout << "Operasi tidak tersimpan" << endl;
        break;
    }

    cout << "Hasil Nilai yang sudah di operasikan adalah : " << jml << endl;

    return 0;
}
