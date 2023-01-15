#pragma once
#pragma warning(disable:4996)
#include <iostream>
#include <string>
#include "Locatie.h"
#include "Bilet.h"
#include "Locatie.h"
#include "Eveniment.h"

using namespace std;

class BiletEveniment:public Eveniment
{
private:
	Locatie locatie;
	Bilet* bilete;
	int nrBilete;

public:
	BiletEveniment();
	BiletEveniment(int id, const char* denumire, const char* data, const char* ora, Locatie locatie, Bilet* bilete, int nrBilete);
	BiletEveniment(const BiletEveniment& b);
	~BiletEveniment();
	BiletEveniment& operator=(const BiletEveniment& b);
	friend ostream& operator<<(ostream& out, const BiletEveniment& b);
	//friend istream& operator>>(istream& in, BiletEveniment& b);
	//Locatie getLocatie();
	//int getNrBilete();
	//Bilet* getBilete();
	//void setLocatie(Locatie locatie);
	//void setBilete(int nrBilete, Bilet* bilete);
	//BiletEveniment operator+(BiletEveniment e);
	//BiletEveniment operator++();
};
