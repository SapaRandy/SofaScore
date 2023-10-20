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

std::string supprimerEspaces(const std::string& str) {
	std::string strModifiee = str;
	strModifiee.erase(std::remove(strModifiee.begin(), strModifiee.end(), ' '), strModifiee.end());
	return strModifiee;
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
Entraineur Arteta("Mikel", "Arteta", 41, "Espagnol","Arsenal", " 4-2-3-1", 191, 1.94, 3);
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
Entraineur Guardiola("Pep", "Guardiola", 52, "Espagnol","Manchester City", "4-3-3", 831, 2.36, 38);
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
Entraineur Emery("Unai", "Emery", 51, "Espagnol","Aston Villa","4-2-3-1",853,1.81,11);
Joueur Emiliano("Emiliano", "Martinez", 31, "Argentin", "Aston Villa", "Droitier", "G", 195, 1);
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
Joueur McGinn("John", "McGinn", 29, "Ecossais", "Aston Villa", "Gaucher", "MIL", 175, 7);
Joueur Diaby("Moussa", "Diaby", 24, "Francais", "Aston Villa", "Gaucher", "ATT", 170, 19);
Joueur Watkins("Ollie", "Watkins", 27, "Anglais", "Aston Villa", "Droit", "ATT", 179, 11);
Joueur Bailey("Leon", "Bailey", 26, "Jamaicain", "Aston Villa", "Gaucher", "ATT", 178, 31);
Joueur Duran("Jhon", "Duran", 19, "Colombien", "Aston Villa", "Gaucher", "ATT", 185, 24);

Equipe AFC("Bournemouth");
Entraineur Iraola("Andoni", "Iraola", 41, "Espagnol","Bournemouth", "4-2-3-1", 224, 1.45, 0);
Joueur Neto("", "Neto", 34, "Bresilien", "Bournemouth", "Droitier", "G", 190, 1);
Joueur Radu("Ionut", "Radu", 26, "Roumain", "Bournemouth", "Droitier", "G", 192, 20);
Joueur Aarons("Max", "Aarons", 23, "Anglais", "Bournemouth", "Droitier", "DEF", 178, 37);
Joueur Fredericks("Ryan", "Fredericks", 31, "Anglais", "Bournemouth", "Droitier", "DEF", 173, 2);
Joueur Smith("Adam", "Smith", 32, "Anglais", "Bournemouth", "Droitier", "DEF", 180, 15);
Joueur Kelly("Lloyd", "Kelly", 25, "Anglais", "Bournemouth", "Gaucher", "DEF", 191, 5);
Joueur Mepham("Chris", "Mepham", 25, "Gallois", "Bournemouth", "Droitier", "DEF", 191, 6);
Joueur Senesi("Marcos", "Senesi", 26, "Argentin", "Bournemouth", "Gaucher", "DEF", 184, 25);
Joueur Kerkez("Milos", "Kerkez", 19, "Hongrois", "Bournemouth", "Gaucher", "DEF", 176, 3);
Joueur Cook("Lewis", "Cook", 26, "Anglais", "Bournemouth", "Droitier", "MIL", 175, 4);
Joueur Tavernier("Marcus", "Tavrenier", 24, "Anglais", "Bournemouth", "Gaucher", "MIL", 178, 16);
Joueur Christie("Ryan", "Christie", 28, "Ecossais", "Bournemouth", "Gauche", "MIL", 178, 10);
Joueur Brooks("David","Brooks", 26, "Anglais", "Bournemouth", "Droitier", "MIL", 175, 7);
Joueur Billing("Philip", "Billing", 27, "Danois", "Bournemouth", "Gaucher", "MIL", 193, 29);
Joueur Kluivert("Justin", "Kluivert", 24, "Neerlandais", "Bournemouth", "Droitier", "ATT", 171,19);
Joueur Solanke("Dominic", "Solanke", 26, "Anglais", "Bournemouth", "Droitier", "ATT", 186, 9);
Joueur Semenyo("Antoine", "Semenyo", 23, "Ghaneen", "Bournemouth", "Droitier", "ATT", 178, 24);

Equipe Tottenham("Tottenham");
Entraineur Postecoglou("Ange", "Postecoglou", 58, "Australien","Tottenham", "4-3-3", 474 , 1.81, 18);
Joueur Vicarno("Guglielmo", "Vicario", 27, "Italie", "Tottenham", "Droitier", "G", 194, 13);
Joueur Foster("Fraser", "Foster", 35, "Anglais", "Tottenham", "Droitier", "G", 201, 20);
Joueur Davies("Ben", "Davies", 30, "Gallois", "Tottenham", "Droitier", "DEF", 181, 33);
Joueur Micky("Micky", "Van De Ven", 22, "Neerlandais", "Tottenham", "Gauche", "DEF", 193, 37);
Joueur Dier("Eric", "Dier", 29, "Anglais", "Tottenham", "Les deux", "DEF", 188, 15);
Joueur Romero("Christian", "Romero", 25, "Argentin", "Tottenham", "Droitier", "DEF", 185, 17);
Joueur Skipp("Oliver", "Skipp", 23, "Anglais", "Tottenham", "Droitier", "MIL", 175, 4);
Joueur Sessegnon("Ryan", "Sessegnon", 23, "Anglais", "Tottenham", "Gaucher", "MIL", 178, 19);
Joueur Hojbjerg("Pierre-Emile", "Hojbjerg", 28, "Danois", "Tottenham", "Droitier", "MIL", 185, 5);
Joueur Porro("Pedro", "Porro", 24, "Espagnol", "Tottenham", "Les deux", "MIL", 173, 23);
Joueur Emerson("Royal", "Emerson", 24,"Bresilien", "Tottenham", "Droitier", "MIL", 183, 12);
Joueur Bissouma("Yves", "Bissouma", 27, "Malien", "Tottenham", "Droitier", "MIL", 181, 8);
Joueur Bentancur("Rodrigo", "Bentancur", 26, "Uruguayen", "Tottenham", "Les deux", "MIL", 187, 30);
Joueur Sarr("Pape", "Matar Sarr", 21, "Senegalais", "Tottenham", "Droitier", "MIL", 185, 29);
Joueur Celso("Giovani", "Lo Celso", 27, "Argentin", "Tottenham", "Gaucher", "MIL", 177, 18);
Joueur Perisic("Ivan", "Perisic", 34, "Croate", "Tottenham", "Les deux", "MIL", 187, 14);
Joueur Maddison("James", "Maddison", 26, "Anglais", "Tottenham", "Droitier", "MIL", 175, 10);
Joueur Son("Heung-Min", "Son", 31, "Coreen", "Tottenham", "Les deux", "ATT", 184, 7);
Joueur Richarlison("", "Ridcharlison", 26, "Bresilien", "Tottenham", "Droitier", "ATT", 184, 9);
Joueur Kulusevski("Dejan", "Kulusevski", 23, "Suedois", "Tottenham", "Gaucher", "ATT", 186, 21);

Equipe Liverpool("Liverpool");
Entraineur Klopp("Jurgen", "Klopp", 56, "Allemand","Liverpool", "4-3-3",1012, 1.86, 14);
Joueur Alisson("", "Alisson", 31, "Bresilien", "Liverpool", "Droitier", "G", 191, 1);
Joueur Kelleher("Caoimhin", "Kelleher", 24, "Irlandais", "Liverpool", "Droitier", "G", 188, 62);
Joueur Arnold("Trent", "Alexander-Arnold", 25, "Anglais", "Liverpool", "Droitier", "DEF", 180, 66);
Joueur Gomez("Joe", "Gomez", 26, "Anglais", "Liverpool", "Droitier", "DEF", 188, 2);
Joueur Matip("Joel", "Matip", 32, "Camerounais", "Liverpool", "Droitier", "DEF", 195, 32);
Joueur Tsimikas("Konstantinos", "Tsimikas", 27, "Grec", "Liverpool", "Gaucher", "DEF", 178, 21);
Joueur Konate("Ibrahima", "Konate", 24, "Francais", "Liverpool", "Droitier", "DEF", 195, 5);
Joueur Virgil("Virgil", "Van Dijk", 32, "Neerlandais", "Liverpool", "Droitier", "DEF", 193, 4);
Joueur Endo("Wataru", "Endo", 30, "Japonais", "Liverpool", "Droitier", "MIL", 178, 3);
Joueur Curtis("Curtis", "Jones", 22, "Anglais", "Liverpool", "Droitier", "MIL", 185, 17);
Joueur Gravenberch("Ryan", "Gravenberch", 21, "Neerlandais", "Liverpool", "Droitier", "MIL", 190, 38);
Joueur Elliott("Harvey", "Elliott", 20, "Anglais", "Liverpool", "Gaucher", "MIL", 185, 19);
Joueur Thiago("", "Thiago", 32, "Espagnol", "Liverpool", "Droitier", "MIL", 174, 6);
Joueur Allister("Alexis", "Mac Allister", 24, "Argentin", "Liverpool", "Droitier", "MIL", 174, 10);
Joueur Dominik("Dominik", "Szoboszlai", 22, "Hongrois", "Liverpool", "Droitier", "MIL", 187, 8);
Joueur Salah("Mohamed", "Salah", 31, "Egyptien", "Liverpool", "Gaucher", "ATT", 175, 11);
Joueur Nunez("Darwin", "Nunez", 24, "Uruguayen", "Liverpool", "Droitier", "ATT", 188,9);
Joueur Diaz("Luis", "Diaz", 26, "Colombien", "Liverpool", "Droitier", "ATT", 178, 7);
Joueur Gapko("Cody", "Gapko", 24, "Neerlandais", "Liverpool", "Droitier", "ATT", 193, 18);
Joueur Jota("Diego", "Jota", 26, "Portuguais", "Liverpool", "Droitier", "MIL", 178,20);

Equipe United("Manchester United");
Entraineur Erik("Erik", "Ten Hag", 53, "Neerlandais","Manchester United", "4-3-3", 510, 2.09, 8);
Joueur Onana("Andre", "Onana", 27, "Camerounais", "Manchester United", "Droitier", "G", 190, 24);
Joueur Bayindir("Altay", "Bayindir", 25, "Turque", "Manchester United", "Droitier", "G", 198, 1);
Joueur Reguillon("Sergio", "Reguillon", 26, "Espagnol", "Manchester United", "Gaucher", "DEF", 178, 15);
Joueur Malacia("Tyrell", "Malacia", 24, "Neerlandais", "Manchester United", "Gaucher", "DEF", 169, 12);
Joueur Lindelof("Victor", "Lindelof", 29, "Suedois", "Manchester United", "Droit", "DEF", 187, 2);
Joueur Bissaka("Aaron", "Wan-Bissaka", 25, "Anglais", "Manchester United", "Droit", "DEF", 183, 29);
Joueur Shaw("Luke", "Shaw", 28, "Anglais", "Manchester United", "Gaucher", "DEF", 178, 23);
Joueur Dalot("Diogo", "Dalot", 24, "Portugais", "Manchester United", "Droit", "DEF", 184, 20);
Joueur Maguire("Harry", "Maguire", 30, "Anglais", "Manchester United", "Gaucher", "DEF", 194, 5);
Joueur Varane("Raphael", "Varane", 30, "Francais", "Manchester United", "Droit", "DEF", 191, 19);
Joueur Martinez("Lisandro", "Martinez", 25, "Argentin", "Manchester United", "Gaucher", "DEF", 175, 6);
Joueur Casemiro("", "Casemiro", 31, "Bresilien", "Manchester United", "Droitier", "MIL", 185, 18);
Joueur Rashford("Marcus", "Rashford", 25, "Anglais", "Manchester United", "Droitier", "MIL", 187, 10);
Joueur Fernandes("Bruno", "Fernandes", 29, "Portugais", "Manchester United", "Droitier", "MIL", 179, 8);
Joueur Antony("", "Antony", 23, "Bresilien", "Manchester United", "Gaucher", "MIL", 172, 21);
Joueur Sancho("Jadon", "Sancho", 23, "Anglais", "Manchester United", "Droitier", "MIL", 180, 25);
Joueur Mount("Mason", "Mount", 24, "Anglais", "Manchester United", "Droitier", "MIL", 178, 7);
Joueur Garnacho("Alenjandro", "Garnacho", 19, "Argentin", "Manchester United", "Droitier", "MIL", 180, 17);
Joueur Eriksen("Christian", "Eriksen", 31, "Danois", "Manchester United", "Les deux", "MIL", 182, 14);
Joueur Amrabat("Sofyan", "Amrabat", 27, "Marocain", "Manchester United", "Droitier", "MIL", 183, 4);
Joueur Martial("Anthony", "Martial", 27, "Anglais", "Manchester United", "Droitier", "ATT", 181, 9);
Joueur Hojlund("Rasmus", "Hojlund", 20, "Danois", "Manchester United", "Gaucher", "ATT", 191, 11);

Equipe Brighton("Brighton");
Entraineur Zerbi("Roberto", "De Zerbi", 44, "Italien","Brighton", "4-2-3-1", 332,1.52, 2);
Joueur Verbruggen("Bart", "Verbruggen", 21, "Neerlandais", "Brighton", "Droitier", "G", 193, 1);
Joueur Steele("Jason", "Steele", 33, "Anglais", "Brighton", "Droitier", "G", 188, 23);
Joueur Webster("Adam", "Webster", 28, "Anglais", "Brighton", "Droitier", "DEF", 191, 4);
Joueur Hecke("Jan Paul", "Van Hecke", 23, "Neerlandais", "Brighton", "Droitier", "DEF", 189, 29);
Joueur Vetlman("Joel", "Veltman", 31, "Neerlandais", "Brighton", "Droitier", "DEF", 184, 34);
Joueur Dunk("Lewis", "Dunk", 31, "Anglais", "Brighton", "Droitier", "DEF", 190, 5);
Joueur Estupinan("Pervis", "Estupian", 25, "Colombien", "Brighton", "Gaucher", "DEF", 175, 30);
Joueur Lamptey("Tariq", "Lamptey", 23, "Ghaneen", "Brighton", "Droitier", "DEF", 165, 2);
Joueur Dahoud("Mahmoud", "Dahoud", 27, "Allemand", "Brighton", "Droitier", "MIL", 177, 8);
Joueur Grob("Pascal", "Grob", 32, "Allemand", "Brighton", "Droitier", "MIL", 181, 13);
Joueur March("Solly", "March", 29, "Anglais", "Brighton", "Gaucher", "MIL", 180, 7);
Joueur Gilmour("Billy", "Gilmour", 22, "Ecossais", "Brighton", "Droitier", "MIL", 169, 11);
Joueur Mitoma("Kaoru", "Mitoma", 26, "Japonais", "Brighton", "Droitier", "MIL", 178, 22);
Joueur Fati("Ansu", "Fati", 20, "Espagnol", "Brighton", "Droitier", "ATT", 178, 31);
Joueur Ferguson("Evan", "Ferguson", 19, "Irlandais", "Brighton", "Droitier", "ATT", 189, 28);
Joueur Pedro("Joao", "Pedro", 22, "Bresilien", "Brighton", "Droitier", "ATT", 182, 9);
Joueur Adingra("Simon", "Adingra", 21, "Ivoirien", "Brighton", "Droitier", "ATT", 175,24);
Joueur Welbeck("Danny", "Welbeck", 32, "Anglais", "Brighton", "Droitier", "ATT", 185, 18);


std::list<Joueur> liste = { Verbruggen,Steele,Webster,Hecke,Vetlman,Dunk,Estupinan,Webster,Lamptey,Dahoud,Grob,March,Gilmour,Mitoma,Fati,Ferguson,Pedro,Adingra,Welbeck,
							Onana,Bayindir,Reguillon,Malacia,Lindelof,Bissaka,Shaw,Dalot,Maguire,Varane,Martinez,Casemiro,Rashford,Fernandes,Antony,Sancho,Mount,Garnacho,Eriksen,Amrabat,Martial,Hojlund,
							Ramsdale,Raya,Saliba,Gabriel,Timber,White,Tomiyasu,Rice,Partey,Jorginho,Odegaard,Havertz,Rowe,Vieira,Martinelli,Trossard,Gabi,Nelson,Saka,Nketiah,
							Ederson,Ortega,Dias,Gvardiol,Ake,Stones,Akanji,Lewis,Walker,Rodri,Kovacic,Silva,Kevin,Foden,Grealish,Doku,Haaland,Alvarez,Nunes,Phillips,
							Emiliano,Olsen,Mings,Chambers,Konsa,Moreno,Carlos,Digne,Torres,Cash,Kamara,Luiz,Tielemans,McGinn,Diaby,Watkins,Bailey,Duran,
							Neto,Radu,Aarons,Fredericks,Smith,Kelly,Mepham,Senesi,Kerkez,Cook,Tavernier,Christie,Brooks,Billing,Kluivert,Solanke,Semenyo,
							Vicarno,Foster,Davies,Micky,Dier,Romero,Skipp,Sessegnon,Hojbjerg,Porro,Emerson,Bissouma,Bentancur,Sarr,Celso,Perisic,Maddison,Son,Richarlison,Kulusevski,
							Alisson,Kelleher,Arnold,Gomez,Matip,Tsimikas,Konate,Virgil,Endo,Curtis,Gravenberch,Elliott,Thiago,Curtis,Allister,Gapko,Dominik,Salah,Nunez,Diaz,Jota,
};

std::list<Entraineur> coach = { Arteta,Guardiola,Emery,Iraola,Postecoglou,Klopp,Erik,Zerbi };
std::list<Equipe> equipe = { Arsenal,City,Aston,AFC,Liverpool,United,Tottenham,Brighton };

void Ligue::equipes() {
	for (auto& equipe : equipe) {
		std::cout << equipe.getNom() << std::endl;
	}
}

void Ligue::selectionEquipe(std::string name) {
	bool recherche = false;
	name = formatString(name);
	name = supprimerEspaces(name);
	std::string test;
	for (auto& equipe : equipe){
		test = equipe.getNom();
		test = supprimerEspaces(test);
		test = formatString(test);
		if (name == test){
			equipe.ajout(liste);
			std::cout << std::endl;
			equipe.afficher(coach);
			recherche = true;
		}
	}if (recherche == false) {
		std::cout << "L'equipe n'est pas dans le championnat" << std::endl;
	}
}

void Ligue::selectionJoueur(std::string name) {
	bool recherche = false;
	name = formatString(name);
	name = supprimerEspaces(name);
	std::string test;
	for (auto& joueur : liste) {
		test = joueur.getNom();
		test = supprimerEspaces(test);
		test = formatString(test);
		if (name == test) {
			std::cout << std::endl;
			joueur.description();
			recherche = true;
		}
	}
	if (recherche == false){
			std::cout << "Le joueur appartient a aucune equipe du championnat" << std::endl;
		}
}

void Ligue::selectionEntraineur(std::string name) {
	bool recherche = false;
	std::string nom;
	name = supprimerEspaces(name);
	name = formatString(name);
	for (auto& entraineur : coach) {
		nom = entraineur.getNom();
		nom = supprimerEspaces(nom);
		nom = formatString(nom);
;		if (name == nom) {
			std::cout << std::endl;
			entraineur.description();
			recherche = true;
		}
	}
	if (recherche == false) {
		std::cout << "L'entraineur entraine dans aucune equipe a aucune equipe du championnat" << std::endl;
	}
}