#include <iostream>
using namespace std;

void FindNumber()
{
    for (int i = 1; ; i++)
    {
        if (i * 32 > 10000)
        {
            cout << i * 32 << endl;
            break;
        }

    }

}
int FindNumber2()
{
    for (int i = 1; ; i++)
    {
        if (i * 32 > 10000)
        {
            return i * 32;
            break;
        }

    }

}
void PascalTriangle()
{
    int riadky;
    int koeficient;
    cout << "Zadaj pocet riadkov"<<endl;
    cin >> riadky;
    for (int i = 0; i < riadky; i++)
    {
        for (int medzera = 1; medzera <= riadky - i; medzera++)
            cout << "  ";

        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                koeficient = 1;
            else
                koeficient = koeficient * (i - j + 1) / j;

            cout << koeficient << "   ";
        }
        cout << endl;
    }
}

int main()
{
    FindNumber();
    cout << FindNumber2()<<endl;
    PascalTriangle();
}


