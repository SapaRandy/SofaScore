#include "Equipe.h"
#include "Joueur.h"
#include "Entraineur.h"

Equipe::Equipe(std::string nom) {
	e_nom = nom;
	entraineur;
	listeJoueurs;
}

void Equipe::association(Entraineur* e) {
	entraineur = e;
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

void Equipe::afficher() {
	int i;
	std::cout << e_nom << std::endl;
	if (entraineur) {
		std::cout << "L'entraineur est " << entraineur->getNom() << std::endl;
	}
	else{
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