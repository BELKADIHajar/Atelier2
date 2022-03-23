#pragma once
#include"Compte.h"
    class ComptePayant :
        public virtual Compte
    {
    private:
        static double taux;
    public:
        ComptePayant(Client prop, MAD solde, double taux);
        bool retirer(MAD montant)override;
        void deposer(MAD montant)override;
    };
