#pragma once
#include <string>
class Implant
{
public:
	Implant(std::string nom, std::string affectedPart, int modification,int prix);
	Implant();
	~Implant();
	std::string Nom;
	std::string AffectedPart;
	int Modification;
	std::string Rarete;
	int Prix;
};

