#pragma once
#ifndef DEF_EQUIPE
#define DEF_EQUIPE

#include "joueur.h"
#include "entraineur.h"
#include <string>
#include <iostream>
#include <list>

class Equipe
{
protected:
	std::string e_nom;
	Entraineur *entraineur;
	std::list<Joueur> listeJoueurs;

public:
	void association(Entraineur *e);
	void ajout(std::list<Joueur> players);
	void afficher();
	std::string getNom() const;
	void iniArsenal(Equipe& equipe);
	Equipe(std::string nom);
	std::string effectif[21];

};
#endif