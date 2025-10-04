#include <iostream>
#include <cstring>
using namespace std;

int word(const char *str)
{
    int x = 0;
    bool inWord = false;

    while (*str != '\0')
    {
        if (*str != ' ' && *str != '\t' && *str != '\n')
        {
            if (!inWord)
            {
                x++;
                inWord = true;
            }
        }

        else
        {
            inWord = false;
        }
        str++;
    }

    return x;
}

int main()
{
    char input[1000];

    cout << "Masukkan kalimat yang akan dihitung jumlah katanya : ";
    cin.getline(input, 1000);

    cout << "Jumlah kata dari kalimat ' " << input << " ' adalah " << word(input) << endl;
    return 0;
}
