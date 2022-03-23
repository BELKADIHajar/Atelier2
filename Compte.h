#pragma once
#include "MAD.h"
#include<iostream>
#include"Client.h"
using namespace std;
class Compte
{
public:
	Compte();
	Compte(Client p, MAD s);
	virtual void deposer(MAD m1);
	virtual bool retirer(MAD m2);
	MAD TestRetrait(MAD m3) const;
	bool testCPE(MAD montant)const;
	MAD& SoldeVal();
	bool transferer(MAD m4, Compte& C1);
	void Consulter() const;
	~Compte();

private:
	int numC;
	static int cpt;
	Client pro;
protected:
	MAD	Solde;

};

