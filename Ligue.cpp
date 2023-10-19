#include "Ligue.h"

Ligue::Ligue() {
	m_nom = "inconnu";
	m_pays = "inconnu";
}

//Identique au constructeur du haut
//Client::Client() : m_nom("inconnu"),m_adresse("inconnu"),m_telephone("inconnu")
// {
//}

void Ligue::coordonnes(std::string nom, std::string pays)
{
	m_nom = nom;
	m_pays = pays;
}

void Ligue::affichage() const
{
	std::cout << "Le nom de la ligue est: " << m_nom << std::endl;
	std::cout << "La " << m_nom << " se situe en " << m_pays << std::endl;
}