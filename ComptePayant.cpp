#include "ComptePayant.h"

ComptePayant::ComptePayant(Client  prop,MAD solde, double taux)
	:Compte(prop,solde)
{
	this->taux = taux;
}

bool ComptePayant::retirer(MAD montant)
{
	MAD com = montant * taux;
	montant += com;
	this->Compte::retirer(montant);
}

void ComptePayant::deposer(MAD montant)
{
	MAD com =montant * taux;
	montant -= com;
	this->Compte::deposer(montant);
}
