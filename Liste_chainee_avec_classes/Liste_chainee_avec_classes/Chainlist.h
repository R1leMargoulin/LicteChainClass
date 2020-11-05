#pragma once
class Chainlist
{
public:

	Chainlist(int, Chainlist*);
	~Chainlist();
	int getnombre() const;
	Chainlist* getnext() const;
	static Chainlist* getpremier();
	static void ajouter();
	static int afficher(Chainlist*);


private:
	int nombre;
	Chainlist* next;//le pointeur next sera le pointeur qui tout simplement pointera vers l'element suivant.

	static Chainlist* premier;   //le pointeur premier sera le pointeur qui pointera vers le premier élement de notre liste
};
