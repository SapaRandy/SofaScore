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

void Equipe::initialisation(std::list<Joueur> players){
	for (auto& joueur : players) {
		listeJoueurs.push_back(joueur);
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

void Equipe::iniArsenal(Equipe &equipe) {
	Entraineur Arteta("Mikel", "Arteta", 41, "Espagnol", " 4-2-3-1", 191, 1.94, 3);
	equipe.association(&Arteta);
	Joueur Ramsdale("Aaron", "Ramsdale", 25, "Anglais", "Droitier", "G", 190, 1);
	Joueur Raya("David", "Raya", 28, "Espagnol", "Droitier", "G", 183, 22);
	Joueur Saliba("William", "Saliba", 22, "Francais", "Droitier", "DEF", 192, 2);
	Joueur Gabriel("Gabriel", "Magalhaes", 25, "Bresilien", "Gaucher", "DEF", 190, 6);
	Joueur Timber("Justin", "Timber", 22, "Neerlandais", "Droitier", "DEF", 182, 12);
	Joueur White("Ben", "White", 26, "Anglais", "Droitier", "DEF", 186, 4);
	Joueur Tomiyasu("Takehiro", "Tomiyasu", 24, "Japonais", "Droitier", "DEF", 188, 18);
	Joueur Rice("Declan", "Rice", 24, "Anglais", "Droitier", "MIL", 188, 41);
	Joueur Partey("Thomas", "Partey", 30, "Ghaneen", "Droitier", "MIL", 185, 5);
	Joueur Jorginho("", "Jorgihno", 31, "Italien", "Droitier", "MIL", 178, 20);
	Joueur Odegaard("Martin", "Odegaard", 24, "Norvegien", "Gaucher", "MIL", 178, 8);
	Joueur Havertz("Kai", "Havertz", 24, "Allemand", "Gaucher", "MIL", 193, 29);
	Joueur Rowe("Emile", "Smith-Rowe", 23, "Anglais", "Droitier", "MIL", 182, 10);
	Joueur Vieira("Fabio", "Vieira", 23, "Portugais", "Gaucher", "MIL", 170, 21);
	Joueur Martinelli("Gabriel", "Martinelli", 22, "Bresilien", "Droitier", "ATT", 178, 11);
	Joueur Trossard("Leandro", "Trossard", 28, "Belge", "Droitier", "ATT", 175, 19);
	Joueur Nelson("Reiss", "Nelson", 24, "Anglais", "Droitier", "ATT", 175, 24);
	Joueur Gabi("Gabriel", "Jesus", 26, "Bresilien", "Droitier", "ATT", 175, 9);
	Joueur Saka("Bukayo", "Saka", 22, "Anglais", "Gauche", "ATT", 178, 7);
	Joueur Nketiah("Eddie", "Nketiah", 24, "Anglais", "Droitier", "ATT", 175, 14);
	std::list<Joueur> liste = { Ramsdale,Raya,Saliba,Gabriel,Timber,White,Tomiyasu,Rice,Partey,Jorginho,Odegaard,Havertz,Rowe,Vieira,Martinelli,Trossard,Gabi,Nelson,Saka,Nketiah };
	equipe.initialisation(liste);
}

