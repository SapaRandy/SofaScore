#include "Entraineur.h"

Entraineur::Entraineur(std::string prenom, std::string nom, int age, std::string nat,std::string equipe, std::string formation, int match, float points, int trophe) {
	p_prenom = prenom;
	p_nom = nom;
	p_age = age;
	p_nat = nat;
	e_equipe = equipe;
	e_formation = formation;
	e_match = match;
	e_points = points;
	e_trophe = trophe;
}


void Entraineur::description(){
	std::cout << p_prenom << " " << p_nom << " " << p_age << " ans " << std::endl;
	std::cout << "Equipe: " << e_equipe << std::endl;
	std::cout << "Nationalite: " << p_nat << std::endl;
	std::cout << "Formation favorite: " << e_formation << std::endl;
	std::cout << e_match << " matchs "<< std::endl;
	std::cout << e_points << " points par match " << std::endl;
	std::cout << e_trophe << " trophees gagne " << std::endl;
}

std::string Entraineur::getEquipe() const {
	return e_equipe;
}

void Entraineur::setEquipe(std::string name) {
	e_equipe = name;
}