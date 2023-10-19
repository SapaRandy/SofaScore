#include <iostream>
#include "Ligue.h"
#include "Entraineur.h"
#include "Joueur.h"
#include "Equipe.h"
#include <list>

int main()
{
	Ligue BPL;

	BPL.coordonnes("Premier League", "Angleterre");
	BPL.affichage();
	std::cout << std::endl;
	Equipe Arsenal("Arsenal");
	Joueur Ederson("", "Ederson", 30, "Bresilien", "Gaucher", "G", 188, 31);
	Arsenal.iniArsenal(Arsenal);
	Arsenal.afficher();
	std::cout << Ederson.getNom() << std::endl;

	std::cout << std::endl;

	/*Equipe City("Manchester City");
	Entraineur Guardiola("Pep", "Guardiola", 52, "Espagnol", "4-3-3", 831, 2.36, 38);
	City.association(&Guardiola);
	Joueur Ederson("", "Ederson", 30, "Bresilien", "Gaucher", "G", 188, 31);
	Joueur Ortega("Stefan", "Ortega", 30, "Allemand", "Droitier", "G", 185, 18);
	Joueur Dias("Ruben", "Dias", 26, "Portugais", "Droitier", "DEF", 187, 3);
	Joueur Gvardiol("Josko", "Gvardiol", 21, "Croate", "Gaucher", "DEF", 185, 24);
	Joueur Ake("Nathan", "Ake", 28, "Neerlandais", "Gaucher", "DEF", 180, 6);
	Joueur Stones("John", "Stones", 29, "Anglais", "Droitier", "DEF", 188, 5);
	Joueur Akanji("Manuel","Akanji", 28, "Suisse","Droitier", "DEF", 188, 25);
	Joueur Lewis("Rico", "Lewis", 18, "Anglais", "Droitier", "DEF", 169, 82);
	Joueur Walker("Kyle", "Walker", 33, "Anglais", "Droitier", "DEF", 183, 2);
	Joueur Rodri("", "Rodri", 27, "Espagnol", "Droitier", "MIL", 191, 16);
	Joueur Kovacic("Matteo", "Kovacic", 29, "Croate", "Droitier", "MIL", 177, 8);
	Joueur Silva("Bernando", "Silva", 29, "Portugais", "Gaucher", "MIL", 173, 20);
	Joueur Kevin("Kevin", "De Bruyne", 32, "Belge", "Droitier", "MIL", 181, 17);
	Joueur Foden("Phil", "Foden", 23, "Anglais", "Gauche", "ATT", 171, 47);
	Joueur Grealish("Jack", "Grealish", 28, "Anglais", "Droitier", "ATT", 180, 10);
	Joueur Doku("Jeremy", "Doku", 21, "Belge", "Droitier", "ATT", 173, 11);
	Joueur Haaland("Erling", "Haaland", 23, "Norvegien", "Gaucher", "ATT", 195, 9);
	Joueur Alvarez("Julian", "Alvarez", 23, "Argentin", "Droitier", "ATT", 170, 19);
	Joueur Nunes("Matheus", "Nunes", 25, "Portuguais", "Droitier", "ATT", 183, 27);
	Joueur Phillips("Kalvin", "Phillips", 27, "Anglais", "Droitier", "MIL", 179, 4);
	gunners = { Ederson,Ortega,Dias,Gvardiol,Ake,Stones,Akanji,Lewis,Walker,Rodri,Kovacic,Silva,Kevin,Foden,Grealish,Doku,Haaland,Alvarez,Nunes,Phillips };
	City.ajout(gunners);
	City.afficher();*/

	return 0;
}