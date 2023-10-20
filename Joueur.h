#pragma once
#ifndef DEF_JOUEUR
#define DEF_JOUEUR

#include "personnage.h"
#include <string>
#include <list>
#include <iostream>

class Joueur : public Personnage
{
protected:
	std::string j_pied;
	std::string j_position;
	std::string j_equipe;
	int j_numero;
	int j_taille;

public:
	Joueur(std::string prenom, std::string nom, int age, std::string nat,std::string j_equipe, std::string pied, std::string position, int taille, int numero);
	void description() override;
	std::string getEquipe() const;
	void setEquipe(std::string name);
};
#endif