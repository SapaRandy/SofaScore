#include "Entraineur.h"

Entraineur::Entraineur(std::string prenom, std::string nom, int age, std::string nat, std::string formation, int match, float points, int trophe) {
	p_prenom = prenom;
	p_nom = nom;
	p_age = age;
	p_nat = nat;
	e_formation = formation;
	e_match = match;
	e_points = points;
	e_trophe = trophe;
}


void Entraineur::description(){
	std::cout << p_nom << " " << p_prenom << " " << p_age << " ans " << std::endl;
	std::cout << "Nationalite: " << p_nat << std::endl;
	std::cout << "Formation favorite: " << e_formation << std::endl;
	std::cout << e_match << " matchs "<< std::endl;
	std::cout << e_points << " points par match " << std::endl;
	std::cout << e_trophe << " trophees gagne " << std::endl;
}