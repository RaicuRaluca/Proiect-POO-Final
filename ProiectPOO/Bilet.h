#pragma once
#pragma warning(disable:4996)
#include <iostream>
#include <string>

using namespace std;

class Bilet
{
private:
	int id;
	char* numeClient;
	int nrLoc;
	int nrRand;
	static int nrTotalBilete;
	
public:
	Bilet();
	Bilet(int, const char*, int, int);
	Bilet(const Bilet&);
	~Bilet();
	Bilet& operator=(const Bilet&);
	char* getNumeClient();
	int getId();
	int getNrLoc();
	int getNrRand();
	void setNumeClient(const char*);
	void setNrLoc(int);
	void setNrRand(int);
	void setNrTotalBilete(int);
	friend ostream& operator<<(ostream&, const Bilet&);
	friend istream& operator>>(istream&, Bilet&);
	bool operator==(const Bilet&);
	bool operator!();
};

