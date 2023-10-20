#include <iostream>
#include "Ligue.h"
#include "Entraineur.h"
#include "Joueur.h"
#include "Equipe.h"
#include <list>

void supprimerEspaces(std::string& chaine) {
	chaine.erase(std::remove(chaine.begin(), chaine.end(), ' '), chaine.end());
}

int main()
{
	int menu;
	std::string choix;
	Ligue BPL("Premier League", "Angleterre");

	do {
		std::cout << "1) Afficher toutes les equipes du championnat" << std::endl;
		std::cout << "2) Afficher les joueurs d'une equipe championnat" << std::endl;
		std::cout << "3) Afficher les infos d'un joueur" << std::endl;
		std::cout << "4) Afficher les infos d'un entraineur" << std::endl;
		std::cout << "5) Quitter l'application" << std::endl;
		std::cout << std::endl;
		std::cin >> menu;
		std::cout << std::endl;
		std::getline(std::cin, choix);
		switch (menu) {
		case 1:
			BPL.equipes();
			break;
		case 2:
			std::cout << "Quelle equipe voulez vous voir?" << std::endl;
			std::getline(std::cin, choix);
			BPL.selectionEquipe(choix);
			break;
		case 3:
			std::cout << "Quel joueur voulez vous voir?" << std::endl;
			std::getline(std::cin, choix);
			BPL.selectionJoueur(choix);
			break;
		case 4:
			std::cout << "Quel entraineur voulez vous voir?" << std::endl;
			std::getline(std::cin, choix);
			BPL.selectionEntraineur(choix);
			break;
		case 5:
			return 0;
		default:
			printf("Votre action n'a pas ete comprise \n");
			break;
		}
		std::cout << std::endl;
	} while (menu != 5);
	


	return 0;
}