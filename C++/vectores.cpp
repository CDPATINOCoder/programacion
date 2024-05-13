#include <iostream>
#include <string>

using namespace std;

string pideTema[5];
string pideBanda[5];

int main()
{
    int devuelveTema, devuelveBanda;
    devuelveTema = pideTema();
    devuelveBanda = pideBanda();
    return 0;
}

string *pideTema[]
{
    string tema[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "ingrese la cancion " << i + 1 << ": ";
        getline(cin, tema[i]);
    }

    return tema;
}

string *pideBanda[5]
{
    string banda[5];
    for (int = 0; i < 5; i++)
    {
        cout << "ingrese la banda " << i + 1 << ": ";
    }

    return banda;
}