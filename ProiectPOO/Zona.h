#pragma once
#pragma warning(disable:4996)
#include <iostream>
#include <string>


using namespace std;

class Zona
{
private:
string tipZona;
unsigned int nrRanduri;
unsigned int* nrLocuri;

public:
Zona();
Zona(string tipZona, unsigned int nrRanduri, unsigned int* nrLocuri);
Zona(const Zona& z);
Zona& operator=(const Zona& z);
~Zona();
string getTipZona();
unsigned int getNrRanduri();
unsigned int* getNrLocuri();
void setTipZona(string tipZona);
void setNrLocuri(unsigned int nrRanduri, unsigned int* nrLocuri);
friend ostream& operator<<(ostream&, const Zona&);
friend istream& operator>>(istream&, Zona&);
int sumaLocuri();
//?
};