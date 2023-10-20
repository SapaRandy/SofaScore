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
	std::string e_pentraineur;
	std::string e_nentraineur;
	std::list<Joueur> listeJoueurs;

public:
	void ajout(std::list<Joueur> players);
	void afficher(std::list<Entraineur> coach);
	std::string getNom() const;
	Equipe(std::string nom);
	std::string effectif[21];

};
#endif