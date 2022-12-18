#pragma once
#pragma warning(disable:4996)
#include <iostream>
#include <string>

using namespace std;

class Locatie
{
private:
	string denumire;
	const int nrMaximLocuri;
public:
	Locatie();
	Locatie(string, int);
	Locatie(const Locatie&);
	~Locatie();
	Locatie& operator=(const Locatie&);
	string getNume();
	void setNume(string);
	int getNrMaximLocuri();
	friend ostream& operator<<(ostream&, const Locatie&);
	friend istream& operator>>(istream&, Locatie&);
};
