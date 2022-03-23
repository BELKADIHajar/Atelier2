#include "CompteEpargne.h"
#include<assert.h>

CompteEpargne::CompteEpargne()
{

}

CompteEpargne::CompteEpargne(Client prop,MAD solde,double tauxIntert)
    : Compte(prop, solde)
{
    assert(tauxIntert >= 0 && tauxIntert <= 100);
    this->tauxIntret = tauxIntert;
}

void CompteEpargne::calcul_interet()
{
    MAD res1 = this->SoldeVal();
    this->SoldeVal() -= (res1 * this->tauxIntret) / 100;
}

bool CompteEpargne::retirer(MAD montant)
{
    CompteEpargne e1;
    if (typeid(this).name() == typeid(e1).name()) {
        if (this->Solde / 2 >= montant)
        {
            return this->Compte::retirer(montant);
        }
        return false;
     }
    else {
        if (this->Solde / 2 >= montant)
        {
            return true;
        }
        else {

            return false;
        }
    }
}
