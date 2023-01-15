#pragma once
#pragma warning(disable:4996)
#include <iostream>
#include <string>
#include "Abstract.h"

using namespace std;

class Bilet:public Abstract
{
private:
	const unsigned int id;
	char* numeClient;
	unsigned int nrLoc;
	unsigned int nrRand;
	static unsigned int nrTotalBilete;
	static int contor;
	
public:
	Bilet();
	Bilet( const char*, unsigned int, unsigned int);
	Bilet(const Bilet&);
	~Bilet();
	Bilet& operator=(const Bilet&);
	char* getNumeClient();
	int getId();
	int getNrLoc();
	int getNrRand();
	void setNumeClient(const char*);
	void setNrLoc(unsigned int);
	void setNrRand(unsigned int);
	void setNrTotalBilete(int);
	friend ostream& operator<<(ostream&, const Bilet&);
	friend istream& operator>>(istream&, Bilet&);
	bool operator==(const Bilet&);
	bool operator!();
	void cumparaBilet();
	bool verificaBilet(int);
	static int calculNrRanduri(int dim, Bilet* bilete);

	// Inherited via Abstract
	virtual void afisareBilet() override;
};


