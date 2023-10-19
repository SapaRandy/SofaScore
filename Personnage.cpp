#include "personnage.h"

Personnage::Personnage() {
	p_nom ;
	p_prenom;
	p_nat;
	p_age;
}

void Personnage::affichage() {
	if (p_prenom == "") {
		std::cout << p_nom << std::endl;
	}
	else {
		std::cout << p_prenom << " " << p_nom << std::endl;
	}
}

std::string Personnage::getNom() const{
	return p_nom;
}

std::string Personnage::getPrenom() const {
	return p_prenom;
}

int Personnage::getAge() const {
	return p_age;
}

std::string Personnage::getNat() const {
	return p_nat;
}

void Personnage::description()
{
}
