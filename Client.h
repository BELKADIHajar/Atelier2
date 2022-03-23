#pragma once
#include <string>
#include <vector>
#include<iostream>
using namespace std;
class Compte;
class Client
{
public:
	Client();
	Client(string nom, string prenom);
	Client& operator=(const Client& C);
	void AddCompte(Compte* C);
	void print() const;
	~Client();
private:
	int Mat = 0;
	static int cpt;
	string nom;
	string prenom;
	vector<Compte*>MesComptes;
};
/*
class Client
{
public:
	Client();
	Client(string nom, string prenom);
	Client& operator=(const Client& C);
	void print() const;
	~Client();
private:
	int Mat = 0;
	static int cpt;
	string nom;
	string prenom;
};
*/