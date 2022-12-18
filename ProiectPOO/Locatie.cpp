#include "Locatie.h"

Locatie::Locatie() : nrMaximLocuri(0)
{
	this->denumire = "Necunoscut";
}

Locatie::Locatie(string nume, int nrMaximLocuri) : nrMaximLocuri(nrMaximLocuri)
{
	this->denumire = nume;
}

Locatie::Locatie(const Locatie& l) : nrMaximLocuri(l.nrMaximLocuri)
{
	this->denumire = l.denumire;
}

Locatie::~Locatie()
{
}

Locatie& Locatie::operator=(const Locatie& l)
{
	if (this != &l)
		this->denumire = l.denumire;
	return *this;
}

ostream& operator<<(ostream& out, const Locatie& l)
{
	out << "Denumire locatie: " << l.denumire << endl;
	out << "Numarul maxim de locuri din locatie: " << l.nrMaximLocuri << endl;
	return out;
}

istream& operator>>(istream& in, Locatie& l)
{
	cout << "Denumire locatie: ";
	getline(in, l.denumire);
	return in;
}

string Locatie::getNume()
{
	return this->denumire;
}

void Locatie::setNume(string nume)
{
	this->denumire = nume;
}

int Locatie::getNrMaximLocuri()
{
	return this->nrMaximLocuri;
}


