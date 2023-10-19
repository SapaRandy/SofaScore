#include "Ligue.h"
#include "Joueur.h"
#include "Entraineur.h"

Ligue::Ligue(std::string nom, std::string pays) {
	m_nom = nom;
	m_pays = pays;
}

void Ligue::affichage() const
{
	std::cout << "Le nom de la ligue est: " << m_nom << std::endl;
	std::cout << "La " << m_nom << " se situe en " << m_pays << std::endl;
}

std::string toLower(std::string str) {
	std::transform(str.begin(), str.end(), str.begin(), ::tolower);
	return str;
}

std::string formatString(std::string str) {
	if (!str.empty()) {
		str[0] = std::toupper(str[0]);
		for (size_t i = 1; i < str.length(); i++) {
			str[i] = std::tolower(str[i]);
		}
	}
	return str;
}

Equipe Arsenal("Arsenal");
Entraineur Arteta("Mikel", "Arteta", 41, "Espagnol", " 4-2-3-1", 191, 1.94, 3);
Joueur Ramsdale("Aaron", "Ramsdale", 25, "Anglais", "Arsenal", "Droitier", "G", 190, 1);
Joueur Raya("David", "Raya", 28, "Espagnol", "Arsenal", "Droitier", "G", 183, 22);
Joueur Saliba("William", "Saliba", 22, "Francais", "Arsenal", "Droitier", "DEF", 192, 2);
Joueur Gabriel("Gabriel", "Magalhaes", 25, "Bresilien", "Arsenal", "Gaucher", "DEF", 190, 6);
Joueur Timber("Justin", "Timber", 22, "Neerlandais", "Arsenal", "Droitier", "DEF", 182, 12);
Joueur White("Ben", "White", 26, "Anglais", "Arsenal", "Droitier", "DEF", 186, 4);
Joueur Tomiyasu("Takehiro", "Tomiyasu", 24, "Japonais", "Arsenal", "Droitier", "DEF", 188, 18);
Joueur Rice("Declan", "Rice", 24, "Anglais", "Arsenal", "Droitier", "MIL", 188, 41);
Joueur Partey("Thomas", "Partey", 30, "Ghaneen", "Arsenal", "Droitier", "MIL", 185, 5);
Joueur Jorginho("", "Jorgihno", 31, "Italien", "Arsenal", "Droitier", "MIL", 178, 20);
Joueur Odegaard("Martin", "Odegaard", 24, "Norvegien", "Arsenal", "Gaucher", "MIL", 178, 8);
Joueur Havertz("Kai", "Havertz", 24, "Allemand", "Arsenal", "Gaucher", "MIL", 193, 29);
Joueur Rowe("Emile", "Smith-Rowe", 23, "Anglais", "Arsenal", "Droitier", "MIL", 182, 10);
Joueur Vieira("Fabio", "Vieira", 23, "Portugais", "Arsenal", "Gaucher", "MIL", 170, 21);
Joueur Martinelli("Gabriel", "Martinelli", 22, "Bresilien", "Arsenal", "Droitier", "ATT", 178, 11);
Joueur Trossard("Leandro", "Trossard", 28, "Belge", "Arsenal", "Droitier", "ATT", 175, 19);
Joueur Nelson("Reiss", "Nelson", 24, "Anglais", "Arsenal", "Droitier", "ATT", 175, 24);
Joueur Gabi("Gabriel", "Jesus", 26, "Bresilien", "Arsenal", "Droitier", "ATT", 175, 9);
Joueur Saka("Bukayo", "Saka", 22, "Anglais", "Arsenal", "Gauche", "ATT", 178, 7);
Joueur Nketiah("Eddie", "Nketiah", 24, "Anglais", "Arsenal", "Droitier", "ATT", 175, 14);

Equipe City("Manchester City");
Entraineur Guardiola("Pep", "Guardiola", 52, "Espagnol", "4-3-3", 831, 2.36, 38);
Joueur Ederson("", "Ederson", 30, "Bresilien","Manchester City", "Gaucher", "G", 188, 31);
Joueur Ortega("Stefan", "Ortega", 30, "Allemand", "Manchester City", "Droitier", "G", 185, 18);
Joueur Dias("Ruben", "Dias", 26, "Portugais", "Droitier", "Manchester City", "DEF", 187, 3);
Joueur Gvardiol("Josko", "Gvardiol", 21, "Croate", "Manchester City", "Gaucher", "DEF", 185, 24);
Joueur Ake("Nathan", "Ake", 28, "Neerlandais", "Manchester City", "Gaucher", "DEF", 180, 6);
Joueur Stones("John", "Stones", 29, "Anglais", "Manchester City", "Droitier", "DEF", 188, 5);
Joueur Akanji("Manuel", "Akanji", 28, "Suisse", "Manchester City", "Droitier", "DEF", 188, 25);
Joueur Lewis("Rico", "Lewis", 18, "Anglais", "Manchester City", "Droitier", "DEF", 169, 82);
Joueur Walker("Kyle", "Walker", 33, "Anglais", "Manchester City", "Droitier", "DEF", 183, 2);
Joueur Rodri("", "Rodri", 27, "Espagnol", "Manchester City", "Droitier", "MIL", 191, 16);
Joueur Kovacic("Matteo", "Kovacic", 29, "Croate", "Manchester City", "Droitier", "MIL", 177, 8);
Joueur Silva("Bernando", "Silva", 29, "Portugais", "Manchester City", "Gaucher", "MIL", 173, 20);
Joueur Kevin("Kevin", "De Bruyne", 32, "Belge", "Manchester City", "Droitier", "MIL", 181, 17);
Joueur Foden("Phil", "Foden", 23, "Anglais", "Manchester City", "Gauche", "ATT", 171, 47);
Joueur Grealish("Jack", "Grealish", 28, "Anglais", "Manchester City", "Droitier", "ATT", 180, 10);
Joueur Doku("Jeremy", "Doku", 21, "Belge", "Manchester City", "Droitier", "ATT", 173, 11);
Joueur Haaland("Erling", "Haaland", 23, "Norvegien", "Manchester City", "Gaucher", "ATT", 195, 9);
Joueur Alvarez("Julian", "Alvarez", 23, "Argentin", "Manchester City", "Droitier", "ATT", 170, 19);
Joueur Nunes("Matheus", "Nunes", 25, "Portuguais", "Manchester City", "Droitier", "ATT", 183, 27);
Joueur Phillips("Kalvin", "Phillips", 27, "Anglais", "Manchester City", "Droitier", "MIL", 179, 4);

Equipe Aston("Aston Villa");
Entraineur Emery("Unai", "Emery", 51, "Espagnol","4-2-3-1",853,1.81,11);
Joueur Martinez("Emiliano", "Martinez", 31, "Argentin", "Aston Villa", "Droitier", "G", 195, 1);
Joueur Olsen("Robin", "Olsen",33, "Suedois", "Aston Villa", "Droitier", "G", 198, 25);
Joueur Mings("Tyrone", "Mings", 30, "Anglais", "Aston Villa", "Gaucher", "DEF", 195, 5);
Joueur Chambers("Calum", "Chambers", 28, "Anglais", "Aston Villa", "Droitier", "DEF", 183, 16);
Joueur Konsa("Ezri", "Konsa", 25, "Anglais", "Aston Villa", "Droit", "DEF", 183, 4);
Joueur Moreno("Alex", "Moreno", 30, "Espagnol", "Aston Villa", "Gaucher", "DEF", 179, 15);
Joueur Carlos("Diego", "Cralos", 30, "Anglais", "Aston Villa", "Droit", "DEF", 185, 3);
Joueur Digne("Lucas", "Digne", 30, "Francais", "Aston Villa", "Gaucher", "DEF", 178, 12);
Joueur Torres("Pau", "Torres", 26, "Espagnol", "Aston Villa", "Gaucher", "DEF", 192, 14);
Joueur Cash("Matty", "Cash", 26, "Anglais", "Aston Villa", "Droitier", "DEF", 185, 2);
Joueur Kamara("Boubacar", "Kamara", 23, "Francais", "Aston Villa", "Droitier", "MIL", 184, 44);
Joueur Luiz("Douglas", "Ruiz", 25, "Bresilien", "Aston Villa", "Droitier", "MIL", 178, 6);
Joueur Tielemans("Youri", "Tielemans", 26, "Belge", "Aston Villa", "Droitier", "MIL", 177, 8);
Joueur McGinn("John", "mcGinn", 29, "Ecossais", "Aston Villa", "Gaucher", "MIL", 175, 7);
Joueur Diaby("Moussa", "Diaby", 24, "Francais", "Aston Villa", "Gaucher", "ATT", 170, 19);
Joueur Watkins("Ollie", "Watkins", 27, "Anglais", "Aston Villa", "Droit", "ATT", 179, 11);
Joueur Bailey("Leon", "Bailey", 26, "Jamaicain", "Aston Villa", "Gaucher", "ATT", 178, 31);
Joueur Duran("Jhon", "Duran", 19, "Colombien", "Aston Villa", "Gaucher", "ATT", 185, 24);

std::list<Joueur> liste = { Ramsdale,Raya,Saliba,Gabriel,Timber,White,Tomiyasu,Rice,Partey,Jorginho,Odegaard,Havertz,Rowe,Vieira,Martinelli,Trossard,Gabi,Nelson,Saka,Nketiah,
								Ederson,Ortega,Dias,Gvardiol,Ake,Stones,Akanji,Lewis,Walker,Rodri,Kovacic,Silva,Kevin,Foden,Grealish,Doku,Haaland,Alvarez,Nunes,Phillips,
								Martinez,Olsen,Mings,Chambers,Konsa,Moreno,Carlos,Digne,Torres,Cash,Kamara,Luiz,Tielemans,McGinn,Diaby,Watkins,Bailey,Duran };
std::list<Equipe> equipe = { Arsenal,City,Aston };
void Ligue::initialisation() {
	
	
	Arsenal.association(&Arteta);
	Arsenal.ajout(liste);
	City.association(&Guardiola);
	City.ajout(liste);
	Aston.association(&Emery);
	Aston.ajout(liste);
}

void Ligue::equipes() {
	std::list<Equipe> equipe = { Arsenal,City,Aston };
	for (auto& equipe : equipe) {
		std::cout << equipe.getNom() << std::endl;
	}
}

void Ligue::selectionEquipe(std::string name) {
	bool recherche = false;
	name = formatString(name);
	std::string test;
	for (auto& equipe : equipe) {
		test = equipe.getNom();
		formatString(name);
		formatString(test);
		if (name == test){
			std::cout << std::endl;
			equipe.afficher();
			recherche = true;
		}
	}if (recherche == false) {
		std::cout << "L'equipe n'est pas dans le championnat" << std::endl;
	}
}

void Ligue::selectionJoueur(std::string name) {
	bool recherche = false;
	for (auto& joueur : liste) {
		if (name == joueur.getNom()) {
			std::cout << std::endl;
			joueur.description();
			recherche = true;
		}
	}
	if (recherche == false){
			std::cout << "Le joueur appartient à aucune equipe du championnat" << std::endl;
		}
}