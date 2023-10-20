#pragma once
#ifndef DEF_ENTRAINEUR
#define DEF_ENTRAINEUR

#include "personnage.h"
#include <string>
#include <iostream>

class Entraineur : public Personnage
{
protected:
	std::string e_formation;
	std::string e_equipe;
	int e_match;
	float e_points;
	int e_trophe;

public:
	Entraineur(std::string prenom, std::string nom, int age, std::string nat,std::string equipe, std::string formation, int match, float points, int trophe); 
	void description() override;

	std::string getEquipe() const;
	void setEquipe(std::string name);

};
#endif