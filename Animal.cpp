#include <iostream>
#include <stdlib.h>
#include "Animal.h"
using namespace std;
Animal::Animal (){
	species = "";
	year_discovered = 0;
};

Animal::Animal (string speciesName, unsigned int discoveryYear){
   species = speciesName;
   year_discovered = discoveryYear;
};

void Animal::display(){
	cout<< species << "[" << year_discovered << "]" << endl;
};
