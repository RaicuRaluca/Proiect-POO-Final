#include "BiletEveniment.h"

BiletEveniment::BiletEveniment():Eveniment()
{
	this->locatie = Locatie();
	this->nrBilete = 3;
	this->bilete = new Bilet[3];
	for (int i = 0; i < 3; i++)
	{
		this->bilete[i] = Bilet();
	}
}

BiletEveniment::BiletEveniment(int id, const char* denumire, const char* data, const char* ora, Locatie locatie, Bilet * bilete, int nrBilete):Eveniment( id, denumire, data, ora) 
{	
    this->locatie = locatie;
	this->nrBilete = nrBilete;
	this->bilete = new Bilet[nrBilete];
	for (int i = 0; i < nrBilete; i++)
	{
		this->bilete[i] = bilete[i];
	}
}

BiletEveniment::BiletEveniment(const BiletEveniment& b):Eveniment(b)
{
	this->locatie = b.locatie;
	this->nrBilete = b.nrBilete;
	this->bilete = new Bilet[b.nrBilete];
	for (int i = 0; i < b.nrBilete; i++)
	{
		this->bilete[i] = b.bilete[i];
	}
}

BiletEveniment::~BiletEveniment()
{
	if (bilete) 
	{
		delete[] bilete;
	}
}


BiletEveniment& BiletEveniment::operator=(const BiletEveniment& b)
{
	Eveniment::operator=(b); //mostenire op=
	if (bilete)
	{
		delete[] bilete;
	}

	this->locatie = b.locatie;
	this->nrBilete = b.nrBilete;
	this->bilete = new Bilet[b.nrBilete];
	for (int i = 0; i < b.nrBilete; i++)
	{
		this->bilete[i] = b.bilete[i];
	}
	return *this;
}

ostream& operator<<(ostream& out, const BiletEveniment& b)
{
	out << (Eveniment&)b; 
	out << "Locatie: " << b.locatie << endl;
	out << "Numar bilete: " << b.nrBilete << endl;
	for (int i = 0; i < b.nrBilete; i++)
	{
		out << "Biletul: " << b.bilete[i] << endl;
	}
	return out;
}

//
//istream& operator>>(istream&, BiletEveniment& b)
//{
//	
//}
//
//
//Locatie BiletEveniment::getLocatie()
//{
//
//}
//
//int BiletEveniment::getNrBilete()
//{
//
//}
//
//Bilet* BiletEveniment::getBilete()
//{
//
//}
//
//void BiletEveniment::setLocatie(Locatie locatie)
//{
//
//}
//
//void BiletEveniment::setBilete(int nrBilete, Bilet* bilete)
//{
//
//}
//

