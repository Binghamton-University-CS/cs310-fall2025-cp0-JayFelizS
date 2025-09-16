#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H
#include "Animal.h"

class AnimalsInZoo
{
	public:
		bool store(Animal &another_animal);
		bool remove(const string& animal_name);
		Animal find(const string& animal_name);
		void readSizes(unsigned int &count, unsigned int &capacity);
		void show() const;
		AnimalsInZoo();//constructor
		AnimalsInZoo(unsigned int initial_capacity);//overwritten constructor
		unsigned int makeSpace(unsigned int how_many = 0);

	private:
		Animal animal;
		unsigned int numAnimals; 
		unsigned int capacity;
		Animal* aPtr;
		

};

#endif
