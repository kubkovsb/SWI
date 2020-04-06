#include "Nakup.h"
#include <string>
#include <iostream>


Nakup::Nakup()
{
	this->cena = 0;

}

int Nakup::SpocitejCenu(string list[])
{

	for (int i = 0; i <= 7; i++)
		for (int j = 0; j <= 7; j++)
	{

		{
			if (list[i] == productlist[j])
			{
				cena = cena + prize[i];
			}
		}
	}

	return cena;
}
int Nakup::Zlava(int c)
{
	if (c > 1000)
	{

		c = c - (c * 0.1);
	}
	return c;
}