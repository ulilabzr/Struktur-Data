#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void FirstCapitalize(char *str)
{
    if (*str)
    {
        *str = toupper(*str);
    }
}

void upperCase(char *str)
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}

void lowerCase(char *str)
{
    while (*str)
    {
        *str = tolower(*str);
        str++;
    }
}

int main()
{
    int choice;
    char string[1000];
    cout << "Masukkan kalimat yang ingin anda operasikan  : ";
    cin.getline(string, 1000);

    cout << "Pilih operasi yang ingin dilakukan :\n";
    cout << "1. Huruf pertama menjadi huruf besar\n";
    cout << "2. Huruf besar semua\n";
    cout << "3. Huruf kecil semua " << endl
         << endl;

    cout << "Pilih : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        FirstCapitalize(string);
        break;
    case 2:
        upperCase(string);
        break;
    case 3:
        lowerCase(string);
        break;
    default:
        cout << "Operasi tidak tersimpan" << endl;
        return 1;
    }

    cout << "Hasil kalimat yang sudah di operasikan adalah : " << string << endl;

    return 0;
}
