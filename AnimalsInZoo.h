#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H
#include "Animal.h"

class AnimalsInZoo
{
	public:
		AnimalsInZoo();
		AnimalsInZoo(Animal a);
	        void display();
	private:
		int numAnimals;
		Animal animal;

};

#endif
