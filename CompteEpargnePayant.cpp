#include"CompteEpargnePayant.h"
#include<iostream>
#include "Client.h"
using namespace std;

CompteEpargnePayant::CompteEpargnePayant(Client pro, MAD solde, double TauxInteret)
	:CompteEpargne(pro, solde,TauxInteret), ComptePayant(pro,solde,TauxInteret),Compte(pro,solde)
{

}

bool CompteEpargnePayant::retirer(MAD m2)
{
	if (this->CompteEpargne::retirer(m2)) {
		this->ComptePayant::retirer(m2);
	}
	else {
		cout << "Veuillez modifier le montant :)" << endl;
	}
}

CompteEpargnePayant::~CompteEpargnePayant()
{

}