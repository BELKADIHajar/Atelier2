// Atelier3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include"MAD.h"
#include"Client.h"
#include"Compte.h"
#include"Operation.h"
#include <iostream>
using namespace std;
int main()

{
    MAD* m11 = new MAD(90);
    MAD m1(90);
    MAD m2(90);
    Client Client1("c1", "cp1");
    Client Client2("c2", "cp2");
    Compte cp1(Client1, m1);
    Compte* Compte1 = new Compte(Client1, m1);
    Compte* Compte2 = new Compte(Client2, m2);
    Client2.AddCompte(Compte1);
    Client2.AddCompte(Compte2);
    Client2.print();
    Operation op1("-",m11);
    op1.afficher();


}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
