#pragma once
#include <string>
class Cyborg
{
public:
	Cyborg();
	~Cyborg();
	std::string DefinirType();
	void TypeBonus();
	int numero;
	int force;
	int vitesse;
	int defense;
	int prix;
	std::string caracteristique;
};

