#include <iostream>
using namespace std;

int main()
{
    int x = 100, y = 130, z;

    int *ptrX, *ptrY;

    // Nilai dari X dan Y
    cout << "Nilai dari x = " << x << ", y = " << y << endl
         << endl;

    // Alamat dari X dan Y
    cout << "Alamat dari x = " << &x << ", y = " << &y << endl
         << endl;

    // ptrX menunjuk ke alamat dari X
    ptrX = &x;
    cout << "Isi ptrX = " << ptrX << " (alamat x), nilai yang ditunjuk ptrX = " << *ptrX << endl
         << endl;

    // ptrY menunjuk ke alamat dari y
    ptrY = &y;
    cout << "Isi ptrY = " << ptrY << " (alamat y), nilai yang ditunjuk ptrY = " << *ptrY << endl
         << endl;

    // z berisi nilai yang ditunjuk ptrX
    z = *ptrX;
    cout << "Nilai z = " << z << " sama dengan nilai x (" << x << ")" << endl
         << endl;

    // Mengganti nilai yang ditunjuk ptrY
    *ptrY = 70;
    cout << "Isi ptrY = " << ptrY << " (tetap), nilai y = " << y << " (yang berubah)" << endl
         << endl;

    // merubah nilai yang ditunjuk ptrX
    *ptrX = *ptrY + 5;
    cout << "Isi ptrX = " << ptrX << " (tetap), nilai x = " << x << " (yang berubah)" << endl
         << endl;

    // ptrX menunjuk apa yang ditunjuk ptrY
    ptrX = ptrY;
    cout << "Isi ptrX = " << ptrX << " dan ptrY = " << ptrY << endl
         << endl;

    cout << "nilai yang ditunjuk ptrX = " << *ptrX << " dan ptrY = " << *ptrY << endl
         << endl;

    cout << endl;
    // system("pause");
    return 0;
}
