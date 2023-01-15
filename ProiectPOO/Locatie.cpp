#include "Locatie.h"

Locatie::Locatie() : nrMaximLocuri(0)

{
	this->denumire = "Necunoscut";
	this->zone[0] = Zona();
	this->zone[1] = Zona();
	this->zone[2] = Zona();

}

Locatie::Locatie(string nume, int nrMaximLocuri, Zona zone[3]) : nrMaximLocuri(nrMaximLocuri)
{
	this->denumire = nume;
	for (int i = 0; i < 3; i++)
	{
		this->zone[i] = zone[i];
	}

}

Locatie::Locatie(const Locatie& l) : nrMaximLocuri(l.nrMaximLocuri)
{
	this->denumire = l.denumire;
	for (int i = 0; i < 3; i++)
	{
		this->zone[i] = l.zone[i];
	}
}

Locatie::~Locatie()
{
}

Locatie& Locatie::operator=(const Locatie& l)
{
	if (this != &l)
	{
		this->denumire = l.denumire;
		for (int i = 0; i < 3; i++)
		{
			this->zone[i] = l.zone[i];
		}
	}
	return *this;
}

ostream& operator<<(ostream& out, const Locatie& l)
{
	out << "Denumire locatie: " << l.denumire << endl;
	out << "Numarul maxim de locuri din locatie: " << l.nrMaximLocuri << endl;
	for (int i = 0; i < 3; i++)
	{
		out << "Zona: " << l.zone[i] << endl;
	}
	return out;
}

istream& operator>>(istream& in, Locatie& l)
{
	cout << "Denumire locatie: ";
	getline(in, l.denumire);
	for (int i = 0; i < 3; i++)
	{
		cout << "Zona: ";
		in>>l.zone[i];
	}
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

Zona* Locatie::getZone() 
{
	return zone;
}


void Locatie::setZone(Zona zone[3])
{
	for (int i = 0; i < 3; i++)
	{
		this->zone[i] = zone[i];
	}
}

void Locatie::verificaLocatie()
{
	bool ok;
	if (denumire == "Arena Nationala")
		ok = 0;
	else if (denumire == "MegaMall")
		ok = 0;
	else if (denumire == "Teatrul National")
		ok = 0;
	else
		ok = 1;
}
