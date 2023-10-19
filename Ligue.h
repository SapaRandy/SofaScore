#ifndef DEF_LIGUE
#define DEF_LIGUE

#include"Equipe.h"
#include <string>
#include <iostream>
#include <algorithm>

extern Equipe Arsenal,City,Aston;
extern Entraineur Arteta,Guardiola,Emery;
extern Joueur Ramsdale, Raya, Saliba, Gabriel, Timber, White, Tomiyasu, Rice, Partey, Jorginho, Odegaard, Havertz, Rowe, Vieira, Martinelli, Trossard, Gabi, Nelson, Saka, Nketiah,
	Ederson, Ortega, Dias, Gvardiol, Ake, Stones, Akanji, Lewis, Walker, Rodri, Kovacic, Silva, Kevin, Foden, Grealish, Doku, Haaland, Alvarez, Nunes, Phillips,
	Martinez, Olsen, Mings, Chambers, Konsa, Moreno, Carlos, Digne, Torres, Cash, Kamara, Luiz, Tielemans, McGinn, Diaby, Watkins, Bailey, Duran;

class Ligue
{
//Tous les attributs après public ne sont pas anonnymes
public:
	Ligue(std::string nom, std::string pays);

	//On peut utiliser const si la fonction ne modifie aucune valeur
	void affichage() const;
	void initialisation();
	void equipes();
	void selectionEquipe(std::string name);
	void selectionJoueur(std::string name);
	
	
	//Tous les attributs après private seront privés

private:
	std::string m_nom;
	std::string m_pays;
};

#endif