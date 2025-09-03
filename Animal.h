#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

class Animal {
   public:
      Animal(string speciesName, unsigned int discoveryYear);
      Animal();

      void display();

   private:
      string species;
      unsigned int year_discovered;
};
