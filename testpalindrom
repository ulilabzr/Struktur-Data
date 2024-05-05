#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char word[100];
    int cek = 1;

    cout << "Masukkan kata : ";
    cin.getline(word, 100);

    int length = strlen(word);
    cout << endl;

    cout << "kata asli : " << word << endl;

    cout << "kata dibalik : ";
    char *x = word + length - 1;
    while (x >= word)
    {
        cout << *x;
        x--;
    }

    for (int i = 0; i < length; i++)
    {
        if (word[i] != word[length - i - 1])
        {
            cek = 0;
            break;
        }
    }

    cout << endl;

    if (cek)
    {
        cout << word << " is True" << endl;
    }
    else
    {
        cout << word << " is False" << endl;
    }
    return 0;
}
