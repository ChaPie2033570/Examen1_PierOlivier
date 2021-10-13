// Examen1_PierOlivierCharron.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <ctime>
#include "Cyborg.h"
#include "Implant.h"
#include <list>
int choix = 0;
std::list<Cyborg*> listeCyborg;
std::list<Implant*> listeImplant;
Implant* unImplant;
int main()
{
	// Initiation de l'aleatoire
	srand(time(NULL));
	
	do {
		//Initier le jeu
		std::cin.clear();
		void CreationImplants();
		void afficherMenu();
		switch (choix)
		{
		case 1: {
			// Afficher la liste des cyborgs
			std::cin.clear();
			std::cout << "Liste des cyborgs disponibles" << std::endl;

			for (auto it = listeCyborg.begin();it != listeCyborg.end(); it++)
			{
				std::cout << (*it);
			}

		}break;

		case 2: {
			//Afficher la liste des implants disponibles
			std::cin.clear();
			std::cout << "Liste des implants disponibles" << std::endl;

			for (auto it = listeImplant.begin();it != listeImplant.end(); it++)
			{
				std::cout << (*it);
			}

		} break;

		case 3: {

			int choixImplant;
			// Generer un nouveau cyborg et afficher ces caracteristiques
			std::cin.clear();
			std::cout << ".................CREATION DU CYBORG................."<< std::endl;
			Cyborg* unCyborg = new Cyborg();
			std::cin.clear();
			std::cout << "Voici le cyborg sans implant :>> std::endl";
			std::cout << "Numero du cyborg : " << unCyborg->numero << std::endl;
			std::cout << "Type de cyborg : " << unCyborg->caracteristique << std::endl;
			std::cout << "Force : " << unCyborg->force << std::endl;\
			std::cout << "Defense : " << unCyborg->defense << std::endl;
			std::cout << "Vitesse : " << unCyborg->vitesse << std::endl;
			std::cout << "Prix : " << unCyborg->prix << std::endl;
			std::cout << "" << std::endl;
			std::cout << "Ajouter des implants au Cyborg : " << std::endl;
			std::cout << "1 - Blindage (Bonus de defense)"<< std::endl;
			std::cout << "2 - Hache double (Bonus d'attaque)" << std::endl;
			std::cout << "3 - Laser frontal (Bonus d'attaque)" << std::endl;
			std::cout << "4 - Bottes de soie (Bonus de vitesse)"<< std::endl;
			std::cin >> choixImplant;
			switch (choixImplant)
			{
				case 1: {
					unCyborg->defense += 20;
				}break;
				case 2: {
					unCyborg->force += 15;
				}break;
				case 3: {
					unCyborg->force += 10;
				}break;
				case 4: {
					unCyborg->vitesse += 20;
				}break;
			default:
				break;
			}
			std::cin.clear();
			std::cout << "Voici le cyborg avec les implants :>> std::endl";
			std::cout << "Numero du cyborg : " << unCyborg->numero << std::endl;
			std::cout << "Type de cyborg : " << unCyborg->caracteristique << std::endl;
			std::cout << "Force : " << unCyborg->force << std::endl; \
			std::cout << "Defense : " << unCyborg->defense << std::endl;
			std::cout << "Vitesse : " << unCyborg->vitesse << std::endl;
			std::cout << "Prix : " << unCyborg->prix << std::endl;
			std::cout << "" << std::endl;
		}break;

		default:
			break;
		}
	} while (choix != 4);
}

void afficherMenu() {
	//Afficher le menu et faire le choix de l'option
	std::cout << "Bienvenue sur le jeu de Cyborg " << std::endl;
	std::cout << "1 - Afficher la liste des cyborgs " << std::endl;
	std::cout << "2 - Afficher la liste des implants disponibles " << std::endl;
	std::cout << "3 - Générer un nouveau cyborg et afficher ces caractéristiques " << std::endl;
	std::cout << "4 - Quitter " << std::endl;
	std::cout << "Votre choix : ";
	std::cin >> choix;
}


void CreationImplants() {
	//Cree prealablement les implants au debut du jeu
	unImplant = new Implant("Blindage", "Corps", 20, 50);
	Implant* AjusterPrixRarete(unImplant);
	listeImplant.push_back(unImplant);
	unImplant = new Implant("Hache double ", "Bras droit", 15, 75);
	Implant* AjusterPrixRarete(unImplant);
	listeImplant.push_back(unImplant);
	unImplant = new Implant("Laser frontal", "Tete", 10, 30);
	Implant* AjusterPrixRarete(unImplant);
	listeImplant.push_back(unImplant);
	unImplant = new Implant("Bottes de soie", "Pied", 20, 65);
	Implant* AjusterPrixRarete(unImplant);
	listeImplant.push_back(unImplant);
}

void AjusterPrixRarete() {
	//Ajuste le prix en consequence de la rarete de l'implant
	if (unImplant->Rarete == "Rare")
	{
		unImplant->Prix = unImplant->Prix * 2;
	}
	else
	{
		if (unImplant->Rarete == "Unique")
		{
			unImplant->Prix = unImplant->Prix * 3;
		}
	}
}
