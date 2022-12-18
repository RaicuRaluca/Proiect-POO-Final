#include "Bilet.h"

int Bilet::nrTotalBilete = 0;

Bilet::Bilet()
{
	nrTotalBilete++;
	this->nrLoc = 0;
	this->nrRand = 0;
	this->id = 0;
	this->numeClient = new char[strlen("Necunoscut") + 1];
	strcpy(this->numeClient, "Necunoscut");
}

Bilet::Bilet(int id, const char* numeClient, int nrLoc, int nrRand)
{
	nrTotalBilete++;
	this->id = nrTotalBilete;
	this->numeClient = new char[strlen(numeClient) + 1];
	strcpy(this->numeClient, numeClient);
}

Bilet::Bilet(const Bilet& b)
{
	nrTotalBilete++;
	this->id = nrTotalBilete;
	this->numeClient = new char[strlen(b.numeClient) + 1];
	strcpy(this->numeClient, b.numeClient);
}

Bilet::~Bilet()
{
	if (this->numeClient!=NULL)
		delete[] this->numeClient;
}

Bilet& Bilet::operator=(const Bilet& b)
{
	if (this != &b)
	{
		if (this->numeClient != NULL)
			delete[] this->numeClient;
	
		this->nrLoc = b.nrLoc;
		this->nrRand = b.nrRand;
		this->numeClient = new char[strlen(b.numeClient) + 1];
		strcpy(this->numeClient, b.numeClient);
	}
	return *this;
}

ostream& operator<<(ostream& out, const Bilet& b)
{
	out << "Id client: " << b.id << endl;
	out << "Nume client: " << b.numeClient << endl;
	out << "Numar loc: " << b.nrLoc << endl;
	out << "Numar rand: " << b.nrRand << endl;
	out << endl;
	return out;
}

istream& operator>>(istream& in, Bilet& b)
{
	string buffer;
	cout << "Nume client: ";
	getline(in, buffer);
	if (b.numeClient)
		delete[] b.numeClient;
	b.numeClient = new char[strlen(buffer.c_str()) + 1]; //c_str() - converts a string to an array of characters with a null character at the end
	strcpy(b.numeClient, buffer.c_str());
	cout << "Numar loc: ";
	in >> b.nrLoc;
	cout << "Numar rand: ";
	in >> b.nrRand;
	
	return in;
}

char* Bilet::getNumeClient()
{
	if (this->numeClient!=NULL)
	{
		char* copie = new char[strlen(this->numeClient) + 1];
		strcpy(copie, this->numeClient);
		return copie;
	}
	return NULL;
}

int Bilet::getId()
{
	return this->id;
}

int Bilet::getNrLoc()
{
	return this->nrLoc;
}

int Bilet::getNrRand()
{
	return this->nrRand;
}

void Bilet::setNumeClient(const char* numeClient)
{
	if (this->numeClient!=NULL)
		delete[] this->numeClient;
	this->numeClient = new char[strlen(numeClient) + 1];
	strcpy(this->numeClient, numeClient);
}

void Bilet::setNrLoc(int nrLoc)
{
	if(nrLoc!=NULL)
	this->nrLoc = nrLoc;
}

void Bilet::setNrRand(int nrRand)
{
	if(nrRand != NULL)
	this->nrRand = nrRand;
}

void Bilet::setNrTotalBilete(int nrTotalBilete)
{
	Bilet::nrTotalBilete = nrTotalBilete;
}

bool Bilet::operator==(const Bilet& b)
{
	return (!strcmp(this->numeClient, b.numeClient));
}

bool Bilet::operator!()
{
	int rezervat;
	return rezervat != 0;
}

