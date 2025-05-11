#include <iostream>
#include<stdio.h>
using namespace std;
 
int pionkiBiale = 12;
int pionkiCzarne = 12;
 
void rysuj(int plansza[8][8], bool ruchBialy)
{
	cout << "Pozostale biale pionki:" << pionkiBiale << endl <<"Pozostale czarne pionki:" << pionkiCzarne << endl;
	if (ruchBialy)
	{
		cout << "Ruch wykonuja biale" << endl;
	}
	else
	{
		cout << "Ruch wykonuja czarne" << endl;
	}
 
	cout << " A B C D E F G H" << endl;
	for (int i = 0; i < 8; i++)
	{
		printf("\033[37m ");
		cout << i+1;
		for (int j = 0; j < 8; j++)
		{
			if (plansza[i][j]==0)
			{
				//rysowanie białego pola
				printf("\033[37m ");
				cout << '\xFE';
			}
			else if (plansza[i][j]==1)
			{
				//rysowanie czarnego pola
				printf("\033[30m ");
				cout << ' ';
			}
			else if (plansza[i][j] == 2)
			{
				//rysowanie czerwonego(czarnego) pionka
				printf("\033[31m ");
				cout << "X";
			}
			else if (plansza[i][j] == 3)
			{
				//rysowanie bialego pionka
				printf("\033[37m ");
				cout << "X";
			}
		}
		cout << endl;
	}
}
 
 
int main()
{
	bool ruchBialy = true;
 
	int plansza[8][8];
	int kolumnaSkad;
	int wierszSkad;
	int kolumnaDokad;
	int wierszDokad;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if ((i + j) % 2 == 0)
			{
				//pola biale
				plansza[i][j] = 0;
			}
			else
			{
				if (i < 3)
				{
					//pionki czarne
					plansza[i][j] = 2;
				}
				else if (i >= 5)
				{
					//pionki biale
					plansza[i][j] = 3;
				}
				else
				{
					//pola czarne
					plansza[i][j] = 1;
				}
			}
		}
	}
 
 
	while (pionkiBiale > 0 && pionkiCzarne > 0)
	{
		printf("\033[H\033[J");
		rysuj(plansza, ruchBialy);
		cout << "Podaj litere z ktorej kolumny pionek chcesz poruszyc" << endl;
		char tmp;
		cin >> tmp;
		kolumnaSkad = int(tmp) - 65;
		cout << "Podaj cyfre z ktorego wiersza pionek chcesz poruszyc" << endl;
		cin >> wierszSkad;
		wierszSkad = wierszSkad - 1;
 
		cout << "Podaj litere do ktorej kolumny pionek chcesz poruszyc" << endl;
		cin >> tmp;
		kolumnaDokad = int(tmp) - 65;
		cout << "Podaj cyfre do ktorego wiersza pionek chcesz poruszyc" << endl;
		cin >> wierszDokad;
		wierszDokad = wierszDokad - 1;
	}
	if (pionkiBiale > 0)
	{
		cout << "Wygraly biale" << endl;
	}
	else
	{
		cout << "Wygraly czarne" << endl;
	}
 
}