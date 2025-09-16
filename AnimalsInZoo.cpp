#include <iostream>
#include "Animal.h"
#include "AnimalsInZoo.h"

AnimalsInZoo::AnimalsInZoo(){
	capacity  = 1;
	numAnimals = 0;
	aPtr = new Animals[capacity]; //must do this step to create array
}

AnimalsInZoo::AnimalsInZoo(unsigned int initial_capacity){
	capacity = initial_capacity;
	if(capacity == 0){
		capacity = 1;
		break;
	}
	numAnimals = 0;
	aPtr = new Animals[capacity];

}

bool AnimalsInZoo::store(Animal &another_animal){
	if(numAnimals == capacity){//only happens if numAnimals and capacity are equal

		Animals* newArray;//create new pointer

		capacity *= 2;//double its capacity
		newArray = new Animals[capacity];//create new dynamic array

		for(i = 0; i < numAnimals; i++){
			newArry[i] = aPtr[i];//copy old array elements into new array
		}
		delete[i] aptr;//delete old array

		aPtr = newArray//point the old array pointer to the new array
	}
	
	aPtr[numAnimals] = another_animal;//stores other animal into the the array after the last animal in the array
	
	cout<< *aPtr[numAnimal].Print();

	return true;

	//add an animal to the zoo by placing it in first avalible spot in dynamic array 
	//if container fills up it should expand and move into a larger space
	// store should never return false or state that it cannot store animals
	// output form: Animal<animal_name> added to spot <N> of the contained array

}
bool AnimalsInZoo::remove(const string& animal_name){
	//removes an Animal object whose name matches animal_name
	//returns true if an Animal is found and removed
	//returns false if an animal by that name is not found
	// a failed remove also results in the folloing message on standard output(cout) Animal <animal_name> not found
	// remove an animal by copying the animal in the last postion into the postion of the animal being removed
}

Animal AnimalsInZoo::find(const string& animal_name){
	//returns a copy of the first animal whose name matches with animal_name
	//this function should return a copy of an object created with the Animal default (empty) constructor.
	//
}

void AnimalsInZoo::readSizes(unsigned in &cout, unsigned in &capacity){
	//the function fills in the parameters count and capacity
	//used to store the number of Animals currently stored in the object and the number of arrat locations currently allocated for animals respectivly 
}

void AnimalsInZoo::show() const{
//	show all the animals in the object, one per line
		//following format <i>:<animal_name>,<pounds>lbs[be careful *only if animal is dangerous*> 
}
unsigned in AnimalsInZoo::makeSpace(unsigned int how_many =0){
}

void AnimalsInZoo::display(){
	cout<< numAnimals <<endl;
	if(numAnimals > 0){
		animal.display();
	}
}
