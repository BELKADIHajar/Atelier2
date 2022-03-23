
#include "Compte.h"
#include <cassert>
int Compte::cpt = 0;
Compte::Compte()
{

}
Compte::Compte(Client p , MAD s)
{
	Compte::cpt++;
	this->numC = Compte::cpt;
	this->pro = p;
	this->Solde = s;
}

void Compte::deposer(MAD m1)
{
	this->Solde += m1;
}

bool Compte::retirer(MAD m2)
{
	if (this->Solde >= m2) {
		this->Solde -= m2;
		return true;
	}
	return false;
}

MAD Compte::TestRetrait(MAD m3) const
{
	MAD res = this->Solde;
	res -= m3;
	return res;

}

bool Compte::testCPE(MAD montant) const
{
	MAD res = this->Solde;
	res = res / 2;
	if (res >= montant) {
		return true;
	}
	else
		return false;
}

MAD& Compte::SoldeVal()
{
	return  this->Solde;
}

bool Compte::transferer(MAD m4, Compte& C1)
{
	if (this->Solde >= m4) {
		this->Solde -= m4;
		C1.Solde += m4;
		return true;
	}
	return false;
}

void Compte::Consulter() const
{
	cout << "| N " << this->numC << " ||";
	this->Solde.afficher();
	cout << " MAD" << endl;
}

Compte::~Compte()
{

}