#pragma once
#include"MAD.h"
#include"Client.h"
#include"CompteEpargne.h"
#include"ComptePayant.h"
class CompteEpargnePayant : public CompteEpargne, public ComptePayant
{
public:
	CompteEpargnePayant(Client pro, MAD solde, double TauxInteret);
	~CompteEpargnePayant();
	virtual bool retirer(MAD m2)override;
private:

};
