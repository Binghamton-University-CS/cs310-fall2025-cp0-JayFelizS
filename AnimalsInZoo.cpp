#include <iostream>
#include "Animal.h"
#include "AnimalsInZoo.h"

AnimalsInZoo::AnimalsInZoo(){
	numAnimals = 0;
}

AnimalsInZoo::AnimalsInZoo(Animal a){
	numAnimals = 1;
	animal = a;
}

void AnimalsInZoo::display(){
	cout<< numAnimals <<endl;
	if(numAnimals > 0){
		animal.display();
	}
}

