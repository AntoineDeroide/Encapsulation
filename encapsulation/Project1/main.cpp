#include <iostream>
#include <vector>
#include "func.h"
#include "def.cpp"

// Si les fichiers ne sont pas au mm niveau, insérer le chemin du fichier à la place du nom seul. ex : dossier/func.h  ci-dessus

using namespace std;

int main(int argc, const char* argv[]) {
	/*
	std::vector<std::string> strArray;

	int iCount = 1;

	while (1) {
		std::string word;

		cout << "Veuillez ecrire un mot à ajouter à la liste : ";

		cin >> word;

		strArray.push_back(word);

		cout << "Le mot a ete ajoute ! \n";

		cout << "Voici la liste : ";

		for (int i = 0; i < iCount; ++i) {

			cout << strArray[i] << " ";

		}

		cout << '\n' << endl;
		
		iCount++;
	}
	*/

	/*
	std::vector<std::string>* strArray = new std::vector<std::string>;

	std::string str;

	strArray->push_back(str);
	std::cout << (*strArray)[0] << std::endl; 
	*/
	
	/*
	Point a;

	a.x = 1.20;
	a.y = 2.40;
	a.z = 3.60;

	a.ToString();
	*/

	/* EXERCICE 10 */

	StaticObject rock(MyVector2(1.0, 1.0));

	BreakableObject branch(MyVector2(4.0, 3.0), 150);
	
	Mob zombie(MyVector2(5, 5), 80, MyVector2(2,2), 0.75);
	
	Player player(MyVector2(0, 0), 150, MyVector2(-2, -2), 1, 10);



	/**/
	/**/


}