#include "Equipe.h"
#include "Joueur.h"
#include "Entraineur.h"

Equipe::Equipe(std::string nom) {
	e_nom = nom;
	e_pentraineur;
	e_nentraineur;
	listeJoueurs;
}

void Equipe::ajout(std::list<Joueur> players){
	std::string nom;
	for (auto& joueur : players) {
		nom = joueur.getEquipe();
		if (nom == e_nom) {
			listeJoueurs.push_back(joueur);
		}
	}
}

void Equipe::afficher(std::list<Entraineur> coach) {
	std::cout << e_nom << std::endl;
	std::string nom;
	bool trouve = false;
	for (auto& entraineur : coach) {
		nom = entraineur.getEquipe();
		if (nom == e_nom) {
			std::cout << "Entraineur :" << entraineur.getPrenom() << " " << entraineur.getNom() << std::endl;
			trouve = true;
		}
	}
	if(trouve == false){
		std::cout << "Il n'y a pas d'entraineur" << std::endl;
	}
	
	std::cout << "Joueurs de l'effectif :" << std::endl;
	for (auto& joueur : listeJoueurs) {
		joueur.affichage();
	}
}

std::string Equipe::getNom() const {
	return e_nom;
}