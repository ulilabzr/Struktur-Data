#include <iostream>
using namespace std;

int main()
{
    char kampus[] = "UNIVERSITAS AMIKOM YOGYAKARTA";

    // hitung jumlah elemnt array kampus
    int length = sizeof(kampus) / sizeof(char);

    // tampilkan nilai array kampus
    for (int i = 0; i < length; i++)
    {
        cout << kampus[i];
    }

    cout << " Jika dibalik menjadi ";

    char *p = kampus + length - 1;
    while (p >= kampus)
    {
        cout << *p;
        p--;
    }

    cout << endl
         << endl;
    // system("puase");
    return 0;
}
