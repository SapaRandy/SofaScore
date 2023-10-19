#include <iostream>
#include "Ligue.h"
#include "Entraineur.h"
#include "Joueur.h"
#include "Equipe.h"
#include <list>


int main()
{
	int menu;
	std::string choix;
	Ligue BPL("Premier League", "Angleterre");
	BPL.initialisation();

	do {
		std::cout << "1) Afficher toutes les equipes du championnat" << std::endl;
		std::cout << "2) Afficher les joueurs d'une equipe championnat" << std::endl;
		std::cout << "3) Afficher les infos d'un joueur" << std::endl;
		std::cout << "4) Quitter l'application" << std::endl;
		std::cout << std::endl;
		std::cin >> menu;
		std::cout << std::endl;
		switch (menu) {
		case 1:
			BPL.equipes();
			break;
		case 2:
			std::cout << "Quelle equipe voulez vous voir ?" << std::endl;
			std::cin >> choix;
			BPL.selectionEquipe(choix);
			break;
		case 3:
			std::cout << "Quelle joueur voulez vous voir ?" << std::endl;
			std::cin >> choix;
			BPL.selectionJoueur(choix);
			break;
		case 4:
			return 0;
		default:
			printf("Votre action n'a pas ete comprise \n");
			break;
		}
		std::cout << std::endl;
	}while (menu != 4);


	return 0;
}