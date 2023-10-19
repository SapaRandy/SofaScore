#pragma once
#ifndef DEF_JOUEUR
#define DEF_JOUEUR

#include "personnage.h"
#include <string>
#include <iostream>

class Joueur : public Personnage
{
protected:
	std::string j_pied;
	std::string j_position;
	int j_numero;
	int j_taille;

public:
	Joueur(std::string prenom, std::string nom, int age, std::string nat, std::string pied, std::string position, int taille, int numero);
		
	void description() override;
};
#endif