#include "Cyborg.h"
#include <string>
#include "Utilitaire.h"
// Constructeur du cyborg
Cyborg :: Cyborg() {
	std::string caracteristique = DefinirType();
	numero = Utilitaire::GenererNb(1,100);
	force = 20;
	vitesse = 10;
	defense = 20;
	prix = 75;
	TypeBonus();
}
// Destructeur du cyborg
Cyborg::~Cyborg() {}

std::string Cyborg::DefinirType(){
	std::string type;
	int  choixAleatoire = Utilitaire::GenererNb(1, 10);
	switch (choixAleatoire)
	{
	case 1: {
		return "Cyborg de feu";
	}break;

	case 2: {
		return "Cyborg de glace";
	}break;
	case 3: {
		return "Cyborg de l'eau";
	}break;
	case 4: {
		return "Cyborg de l'air";
	}break;
	case 5: {
		return "Cyborg de protection";
	}break;
	case 6: {
		return "Cyborg nucleaire";
	}break;
	case 7: {
		return "Cyborg de soin";
	}break;
	case 8: {
		return "Cyborg eclaireur";
	}break;
	case 9: {
		return "Cyborg puant";
	}break;
	case 10: {
		return "Cyborg de combat a distance";
	}break;
	default:
		break;
	}
}

 void Cyborg::TypeBonus() {
	if (Cyborg::caracteristique == "Cyborg de feu")
	{
		Cyborg::force += 5;
	}
	else
	{
		if (Cyborg::caracteristique == "Cyborg de glace")
		{
			Cyborg::force += 5;
		}
		else
		{
			if (Cyborg::caracteristique == "Cyborg de l'eau")
			{
				Cyborg::force += 5;
			}
			else
			{
				if (Cyborg::caracteristique == "Cyborg de l'air")
				{
					Cyborg::force += 5;
				}
				else
				{
					if (Cyborg::caracteristique == "Cyborg de protection")
					{
						Cyborg::force -= 5;
						Cyborg::defense += 20;
						Cyborg::vitesse -= 5;
					}
					else
					{
						if (Cyborg::caracteristique == "Cyborg nucleaire")
						{
							Cyborg::force += 30;
							Cyborg::defense -= 10;
						}
						else
						{
							if (Cyborg::caracteristique == "Cyborg de soin")
							{
								Cyborg::force -= 5;
								Cyborg::defense += 10;
								Cyborg::vitesse += 10;
							}
							else
							{
								if (Cyborg::caracteristique == "Cyborg eclaireur")
								{
									Cyborg::force += 25;
									Cyborg::defense -= 10;
									Cyborg::vitesse -= 10;
								}
								else
								{
									if (Cyborg::caracteristique == "Cyborg puant")
									{
										Cyborg::defense += 5;
										Cyborg::vitesse += 10;
									}
									else
									{
										if (Cyborg::caracteristique == "Cyborg de combat a distance")
										{
											Cyborg::force += 20;
											Cyborg::defense -= 15;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}