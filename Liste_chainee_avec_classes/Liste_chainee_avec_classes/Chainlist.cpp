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



Chainlist ajouter(int a)
{
		Chainlist::premier = new Chainlist(a, Chainlist::premier);  //ici c'est le point technique, dans cette fonction, on dit a premier de pointer vers l'element qu'on créé qui devient notre premier elem de liste(avec un pointeur qui va pointer vers l'ancienne valeure de premier donc l'ancien premier element)
}
