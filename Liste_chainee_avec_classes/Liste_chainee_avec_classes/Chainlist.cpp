#include <iostream>
#include "Chainlist.h"


Chainlist::Chainlist(int a, Chainlist *ptr): nombre(a)
{
	next = ptr;
}

Chainlist::~Chainlist()
{
	premier = next;
	delete next;
}

int Chainlist::getnombre() const
{
	return nombre;
}

Chainlist* Chainlist::getnext() const
{
	return next;
}



void ajouter()//dans cette fonction on ajoute un nombre au choix de l'utilisateur d'element de liste a créer
{
	int a;
	int n = 0;
	std::cout << "Combien d'element ahouter a votre liste?:  ";
	std::cin >> n;
	std::cout << std::endl;
	for (int i = 0; i = n; i++) {
		std::cout << "Nombre a ajouter:  ";
		std::cin >> a;
		Chainlist::premier = new Chainlist(a, Chainlist::premier);  //ici c'est le point technique, dans cette fonction, on dit a premier de pointer vers l'element qu'on créé qui devient notre premier elem de liste(avec un pointeur qui va pointer vers l'ancienne valeure de premier donc l'ancien premier element)
	}

}

int afficher(Chainlist* ptr)  //dans cette fonction récursive (pour changer de la fonction d'ajout), on afiche la liste.
{
	if (ptr == 0) {
		return 0;
	}
	else {
		std::cout << ptr->getnombre();
		return afficher(ptr->getnext());
	}
}



