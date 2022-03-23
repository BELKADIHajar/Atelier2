#pragma once
#include "Compte.h"
	class CompteEpargne : public virtual Compte
	{

	public:
		CompteEpargne();
		CompteEpargne(Client prop, MAD solde, double tauxIntert);
		void calcul_interet();
		virtual bool retirer(MAD montant)override;

	private:
		double tauxIntret;

	};
