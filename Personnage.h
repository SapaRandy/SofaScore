#pragma once
#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>
#include <iostream>

class Personnage
{
	//Tous les attributs apr�s public ne sont pas anonnymes
public:
	Personnage();
	void affichage();
	std::string getNom() const;
	std::string getPrenom() const;
	int getAge() const;
	std::string getNat() const;
	virtual void description();
	//Tous les attributs apr�s private seront priv�s

protected:
	std::string p_nom;
	std::string p_prenom;
	int p_age;
	std::string p_nat;
};
#endif