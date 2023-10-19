#include "Joueur.h"
#include "Equipe.h"


Joueur::Joueur(std::string prenom, std::string nom, int age, std::string nat,std::string equipe, std::string pied, std::string position, int taille, int numero)
{
	p_prenom = prenom;
	p_nom = nom;
	p_age = age;
	p_nat = nat;
	j_equipe= equipe;
	j_pied = pied;
	j_position = position;
	j_taille = taille;
	j_numero = numero;
}

void Joueur::description(){
	std::cout << p_nom << " " << p_prenom << " " << p_age << " ans " << std::endl;
	std::cout << "Equipe:" << j_equipe << std::endl;
	std::cout << "Nationalite: " << p_nat << std::endl;
	std::cout << "Pied fort: " << j_pied << std::endl;
	std::cout << "Position:  " << j_position << std::endl;
	std::cout << "Taille(cm): " << j_taille << std::endl;
	std::cout << "Numero: " << j_numero << std::endl;
}

std::string Joueur::getEquipe() const{
	return j_equipe;
}