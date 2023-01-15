#pragma once
#pragma warning(disable:4996)
#include <iostream>
#include <string>

using namespace std;

class Eveniment
{
private:
    int id;
	int nrEvenimente;
	char* denumire;
	char* data;
	char* ora;

public:
	Eveniment();
	Eveniment(int, const char*, const char*, const char*);
	Eveniment(const Eveniment&);
	~Eveniment();
	Eveniment& operator=(const Eveniment&);
	friend ostream& operator<<(ostream&, const Eveniment&);
	friend istream& operator>>(istream&, Eveniment&); 
	int getId();
	int getNrEvenimente();
	char* getDenumire();
	char* getData();
	char* getOra();
	void setDenumire(const char*);
	void setData(const char*);
	void setOra(const char*);
	Eveniment operator+(Eveniment e);
	Eveniment operator++(); //preincrementare
	bool verificaExistentaEveniment();
	bool verificaNumarEveniment();
};