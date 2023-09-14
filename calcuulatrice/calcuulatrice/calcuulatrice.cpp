// calcuulatrice.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "operation.h"

int main()
{
	int nombreA = 0;
	int nombreB = 0;
	char signeOperation;

	std::cout << "nombre A ?\n";
	std::cin >> nombreA;

	std::cout << "operation ?\n";
	std::cin >> signeOperation;

	std::cout << "nombre B ?\n";
	std::cin >> nombreB;

	if (signeOperation == '+')
	{
		std::cout << "somme : " << add(nombreA, nombreB) << "\n";
	}
	else if (signeOperation == '-')
	{
		std::cout << "diference : " << subsatrct(nombreA, nombreB) << "\n";
	}
	else if (signeOperation == '/')
	{
		int quotien = divided(nombreA, nombreB);
		if (quotien == 0)
		{
			std::cout << "operation invalide \n";
		}
		else
		{
			std::cout << "quotien : " << quotien << "\n";
		}
	}
	else if (signeOperation == '*')
	{
		std::cout << "produit : " << multipy(nombreA, nombreB) << "\n";
	}
	else
	{
		std::cout << "operation invalide \n";
	}

}


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
