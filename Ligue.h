#ifndef DEF_LIGUE
#define DEF_LIGUE

#include"Equipe.h"
#include <string>
#include <iostream>

class Ligue
{
//Tous les attributs après public ne sont pas anonnymes
public:
	Ligue();
	void coordonnes(std::string nom, std::string pays);

	//On peut utiliser const si la fonction ne modifie aucune valeur
	void affichage() const;

	//Tous les attributs après private seront privés

private:
	std::string m_nom;
	std::string m_pays;
};

#endif