#pragma warning (disable:4996)
#include <iostream>
#include <fstream>
#include <string>
#include "Eveniment.h"
#include "Bilet.h"
#include "Zona.h"
#include "BiletEveniment.h"
#include "Locatie.h"


using namespace std;


int main() {

	//Bilet bilet;
	//cin >> bilet;

	//Eveniment e;
	//cin >> e;

    int optiune;
	bool b=1;

	while (b == 1)
	{

		cout << "                                         The Ticketing App " << endl;
		cout << "                                          Bine ati venit!\n " << endl;
		cout <<
			" ========================        ==========================        ======================        ======================\n"
			" (1) AFISEAZA EVENIMENTE             (2) CUMPARA BILET               (3) VERIFICA BILET                (0) IESIRE       \n"
			" ========================        ==========================        ======================        ======================\n\n";
		cout << "\nAlege: ";
		cin >> optiune;
		switch (optiune)
		{
		case 0:
		{
			b = 0;
			break;
		}
		case 1:
		{
			ifstream f1;
			f1.open("Evenimente.txt", ios::in);
			if (f1.is_open())
			{
				cout << "                                          ----------------EVENIMENTE----------------\n" << endl;
				string line;
				while (getline(f1, line))
				{
					cout << "                                         "<< line << endl;
				}
				f1.close();
				cout << "                                          ----------------EVENIMENTE----------------\n\n\n" << endl;
			}
			break;
		}
		case 2:
		{
			Eveniment e;
			cin >> e;
			Bilet bilet;
			cin >> bilet;
			break;
		}
		case 3:
		{
			Bilet bilet1("Raicu Raluca",1,1);
			string s;
			if (bilet1.verificaBilet(bilet1.getId())==true)
			{
				cout << "\nBiletul este valid!\n"<< endl;
			}
			else
			{
				cout << "\nBiletul NU este valid!\n" << endl;
			}

			break;
		}
		default:
		{
			cout << "\nOptiune invalida! Mai incearca!" << endl;
			break;
		}
		}
	}


	return 0;
}