#include "Utilitaire.h"
#include <ctime>
#include <iostream>

 int Utilitaire::GenererNb(int min, int max) {

	return(rand() % (max - min + 1)) + min;
}

