#include "Eveniment.h"

Eveniment::Eveniment()
{
	nrEvenimente++;
	this->id = nrEvenimente;
	this->denumire = new char[strlen("Necunoscut") + 1];
	strcpy_s(this->denumire, strlen("Necunoscut") + 1, "Necunoscut");
	this->data = new char[strlen("Necunoscut") + 1];
	strcpy(this->data, "Necunoscut");
	this->ora = new char[strlen("Necunoscut") + 1];
	strcpy(this->ora, "Necunoscut");
}

Eveniment::Eveniment(int id, const char* denumire, const char* data, const char* ora)
{
	nrEvenimente++;
	this->id = nrEvenimente;
	this->denumire = new char[strlen(denumire) + 1];
	strcpy(this->denumire, denumire);
	this->data = new char[strlen(data) + 1];
	strcpy(this->data, data);
	this->ora = new char[strlen(ora) + 1];
	strcpy(this->ora, ora);

}

Eveniment::Eveniment(const Eveniment& e)
{
	nrEvenimente++;
	this->id = nrEvenimente;
	denumire = new char[strlen(e.denumire) + 1];
	strcpy(denumire, e.denumire);
	this->data = new char[strlen(e.data) + 1];
	strcpy(this->data, e.data);
	this->ora = new char[strlen(e.ora) + 1];
	strcpy(this->ora, e.ora);
}

Eveniment::~Eveniment()
{
	if (this->denumire != NULL)
		delete[] this->denumire;
	if (this->data!=NULL)
		delete[] this->data;
	if (this->ora != NULL)
		delete[] this->ora;
}

Eveniment& Eveniment::operator=(const Eveniment& e)
{
	if (this != &e)
	{
		this->id = e.id;
		if (this->denumire != NULL)
			delete[] this->denumire;
		this->denumire = new char[strlen(e.denumire) + 1];
		strcpy(this->denumire, e.denumire);
		if (this->data != NULL)
			delete[] this->data;
		this->data = new char[strlen(e.data) + 1];
		strcpy(this->data, e.data);
		if (this->ora != NULL)
			delete[] this->ora;
		this->ora = new char[strlen(e.ora) + 1];
		strcpy(this->ora, e.ora);
	}
	return *this;
}

ostream& operator<<(ostream& out, const Eveniment& e)
{
	out << "Id eveniment: " << e.id << endl;
	out << "Denumire eveniment: " << e.denumire << endl;
	out << "Data eveniment: " << e.data << endl;
	out << "Ora eveniment: " << e.ora << endl;

	return out;
}

istream& operator>>(istream& in, Eveniment& e)
{
	string buffer;
	cout << "Denumire eveniment: ";
	getline(in, buffer);
	if (e.denumire)
		delete[] e.denumire;
	e.denumire = new char[strlen(buffer.c_str()) + 1]; //c_str() - converts a string to an array of characters with a null character at the end
	strcpy(e.denumire, buffer.c_str());

	cout << "Data eveniment: ";
	getline(in, buffer);
	if (e.data)
		delete[] e.data;
	e.data = new char[strlen(buffer.c_str()) + 1]; 
	strcpy(e.data, buffer.c_str());

	cout << "Ora eveniment: ";
	getline(in, buffer);
	if (e.ora)
		delete[] e.ora;
	e.ora = new char[strlen(buffer.c_str()) + 1]; 
	strcpy(e.ora, buffer.c_str());
	
	return in;
}

char* Eveniment::getDenumire()
{
	if (this->denumire!=NULL)
	{
		char* copie = new char[strlen(this->denumire) + 1];
		strcpy(copie, this->denumire);
		return copie;
	}
	return NULL;
}

char* Eveniment::getData()
{
	if (this->data != NULL)
	{
		char* copie = new char[strlen(this->data) + 1];
		strcpy(copie, this->data);
		return copie;
	}
	return nullptr;
}

char* Eveniment::getOra()
{
	if (this->ora!=NULL)
	{
		char* copie = new char[strlen(this->ora) + 1];
		strcpy(copie, this->ora);
		return copie;
	}
	return nullptr;
}

int Eveniment::getId()
{
	return this->id;
}

 int Eveniment::getNrEvenimente()
{
	return this->nrEvenimente;
}

 char* Eveniment::getDenumire()
 {
	 if (this->denumire != NULL)
	 {
		 char* copie = new char[strlen(this->denumire) + 1];
		 strcpy(copie, this->denumire);
		 return copie;
	 }
	 return NULL;
 }

 char* Eveniment::getOra()
 {
	 if (this->ora != NULL)
	 {
		 char* copie = new char[strlen(this->ora) + 1];
		 strcpy(copie, this->ora);
		 return copie;
	 }
	 return NULL;
 }

 char* Eveniment::getData()
 {
	 if (this->data != NULL)
	 {
		 char* copie = new char[strlen(this->data) + 1];
		 strcpy(copie, this->data);
		 return copie;
	 }
	 return NULL;
 }

 Eveniment Eveniment::operator+(Eveniment e)
 {
	 Eveniment copie = *this;
	 copie.nrEvenimente = nrEvenimente + e.nrEvenimente;
	 return copie;
 }

 Eveniment Eveniment::operator++()
 {
	 this->nrEvenimente++;
	 return *this;
 }