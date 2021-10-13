#include "Implant.h"
#include <list>
#include "Utilitaire.h"
#include <string>
// Constructeur de l'implant
Implant::Implant() {
	Nom = "";
	AffectedPart = "";
	Modification = 0;
	Rarete = DefinirRarete();
	Prix = 0;
}
Implant::Implant(std::string nom, std::string affectedPart, int modification,int prix) {
	Nom = nom;
	AffectedPart = affectedPart;
	Modification = modification;
	Rarete = DefinirRarete();
	Prix = prix;
}
// Destructeur de l'implant
Implant::~Implant(){}

std::string DefinirRarete() {
	int aleatoireNb = Utilitaire::GenererNb(1, 3);
		switch (aleatoireNb)
		{
		case 1: {
			return "Ordinaire";
		}break;

		case 2: {
			return "Rare";
		}break;

		case 3: {
			return "Unique";
		}break;


		default:
			break;
		}
}