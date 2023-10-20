#ifndef DEF_LIGUE
#define DEF_LIGUE

#include"Equipe.h"
#include <string>
#include <iostream>
#include <algorithm>

extern Equipe Arsenal,City,Aston,AFC,Tottenham,Liverpool,United,Brighton;
extern Entraineur Arteta,Guardiola,Emery,Iraola,Postecoglou,Klopp,Erik,Zerbi;
extern Joueur Verbruggen, Steele, Webster, Hecke, Vetlman, Dunk, Estupinan, Webster, Lamptey, Dahoud, Grob, March, Gilmour, Mitoma, Fati, Ferguson, Pedro, Adingra, Welbeck,
	Ramsdale, Raya, Saliba, Gabriel, Timber, White, Tomiyasu, Rice, Partey, Jorginho, Odegaard, Havertz, Rowe, Vieira, Martinelli, Trossard, Gabi, Nelson, Saka, Nketiah,
	Ederson, Ortega, Dias, Gvardiol, Ake, Stones, Akanji, Lewis, Walker, Rodri, Kovacic, Silva, Kevin, Foden, Grealish, Doku, Haaland, Alvarez, Nunes, Phillips,
	Emiliano, Olsen, Mings, Chambers, Konsa, Moreno, Carlos, Digne, Torres, Cash, Kamara, Luiz, Tielemans, McGinn, Diaby, Watkins, Bailey, Duran,
	Neto, Radu, Aarons, Fredericks, Smith, Kelly, Mepham, Senesi, Kerkez, Cook, Tavernier, Christie, Brooks, Billing, Kluivert, Solanke, Semenyo,
	Vicarno, Foster, Davies, Micky, Dier, Romero, Skipp, Sessegnon, Hojbjerg, Porro, Emerson, Bissouma, Bentancur, Sarr, Celso, Perisic, Maddison, Son, Richarlison, Kulusevski,
	Alisson, Kelleher, Arnold, Gomez, Matip, Tsimikas, Konate, Virgil, Endo, Curtis, Gravenberch, Elliott, Thiago, Curtis, Allister, Dominik, Salah, Nunez, Diaz, Jota, Gakpo,
	Onana, Bayindir, Reguillon, Malacia, Lindelof, Bissaka, Shaw, Dalot, Maguire, Varane, Martinez, Casemiro, Rashford, Fernandes, Antony, Sancho, Mount, Garnacho, Eriksen, Amrabat, Martial, Hojlund;


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
	void selectionJoueur(std::string choix);
	void selectionEntraineur(std::string name);
	
	
	//Tous les attributs après private seront privés

private:
	std::string m_nom;
	std::string m_pays;
};

#endif