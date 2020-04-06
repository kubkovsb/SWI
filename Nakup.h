#pragma once
#include <string>
using namespace std;

class Nakup
{
private:

	string list[10];
	int cena;


public:
	Nakup();
	int SpocitejCenu(string list[]);
	int Zlava(int c);

	string productlist[9] = { "vajca","kura","zemiaky","ryza","chleba","koblihy","kapusta","mlieko" };
	int prize[9] = { 80,300,200,100,80,100,100,100 };
};
