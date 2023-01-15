#include "Zona.h"



Zona::Zona()
{
	this->tipZona = "Necunoscut";
	this->nrRanduri = 0;
	this->nrLocuri = NULL;
}

Zona::Zona(string tipZona, unsigned int nrRanduri, unsigned int* nrLocuri)
{
	this->tipZona = tipZona;
	this->nrRanduri = nrRanduri;
	this->nrLocuri = new unsigned int[nrRanduri];
	for (int i = 0; i < nrRanduri; i++)
	{
		this->nrLocuri[i] = nrLocuri[i];
	}
}

Zona::Zona(const Zona& z)
{
	this->tipZona = z.tipZona;
	this->nrRanduri = z.nrRanduri;
	this->nrLocuri = new unsigned int[z.nrRanduri];
	for (int i = 0; i < z.nrRanduri; i++)
	{
		this->nrLocuri[i] = z.nrLocuri[i];
	}
}

Zona::~Zona()
{
	if (nrLocuri) {
		delete[]nrLocuri;
	}
}

ostream& operator<<(ostream& out, const Zona& z)
{
	out << "Tip Zona: " << z.tipZona << endl;
	out << "Numar randuri: " << z.nrRanduri << endl;
	for (int i = 0; i < z.nrRanduri; i++)
	{
		out << "Numar locuri pe rand: " << z.nrLocuri[i] << endl;
	}
	return out;
}

istream& operator>>(istream& in, Zona& z)
{
	cout << "Tip zona: ";
	getline(in, z.tipZona);
	cout << "Numar randuri: ";
	in >> z.nrRanduri ;
	delete[]z.nrLocuri;
	z.nrLocuri = new unsigned int[z.nrRanduri];
	for (int i = 0; i < z.nrRanduri; i++)
	{
		cout << "Numar locuri pe rand: ";
		in>> z.nrLocuri[i];
	}
	return in;
}

string Zona::getTipZona()
{
	return this->tipZona;
}

unsigned int Zona::getNrRanduri()
{
	return this->nrRanduri;
}

unsigned int* Zona::getNrLocuri()
{
	return this->nrLocuri;
}

void Zona::setTipZona(string tipZona)
{
	this->tipZona = tipZona;
}


void Zona::setNrLocuri(unsigned int nrRanduri, unsigned int* nrLocuri)
{
	delete[]this->nrLocuri;
	this->nrRanduri = nrRanduri;
	this->nrLocuri = new unsigned int[nrRanduri];
	for (int i = 0; i < nrRanduri; i++)
	{
		this->nrLocuri[i] = nrLocuri[i];
	}

}

Zona& Zona::operator=(const Zona& z)
{
	if (nrLocuri) {
		delete[]nrLocuri;
	}

	this->tipZona = z.tipZona;
	this->nrRanduri = z.nrRanduri;
	this->nrLocuri = new unsigned int[z.nrRanduri];
	for (int i = 0; i < z.nrRanduri; i++)
	{
		this->nrLocuri[i] = z.nrLocuri[i];
	}
	return *this;
}

int Zona::sumaLocuri() {
	int suma = 0;
	if (nrRanduri > 0) {
		for (int i = 0; i < nrRanduri; i++) {
			suma += nrLocuri[i];
		}
	}
	return suma;
}
