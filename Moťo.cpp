#include <iostream>
using namespace std;

void FindNumber()
{
    for (int i = 1; ; i++)
    {
        if (i * 32 > 10000)
        {
         printf("%d\n",i*32);
            break;
        }

    }

}

void PascalTriangle()
{
    int riadky;
    int koeficient;
    printf("Zadaj pocet riadkov\n");
    scanf_s("%d",&riadky);
    for (int i = 0; i < riadky; i++)
    {
        for (int medzera = 1; medzera <= riadky - i; medzera++)
             printf("  ");

        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                koeficient = 1;
            else
                koeficient = koeficient * (i - j + 1) / j;

             printf("%d   ", koeficient);
        }
        printf("\n");
    }
}

int main()
{
    FindNumber();
    PascalTriangle();
}


