#pragma once
#pragma warning(disable:4996)
#include <iostream>
#include <string>
#include "Zona.h"

using namespace std;

class Locatie
{
private:
	string denumire;
	const int nrMaximLocuri;
	Zona zone[3];
	
public:
	Locatie();
	Locatie(string, int, Zona zone[3]);
	Locatie(const Locatie&);
	~Locatie();
	Locatie& operator=(const Locatie&);
	string getNume();
	void setNume(string denumire);
	int getNrMaximLocuri();
	Zona* getZone();
	void setZone(Zona zone[3]);
	friend ostream& operator<<(ostream&, const Locatie&);
	friend istream& operator>>(istream&, Locatie&);
	void verificaLocatie();
};
