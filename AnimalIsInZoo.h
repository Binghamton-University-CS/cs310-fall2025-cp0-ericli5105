#ifndef AnimalIsInZoo_h
#define AnimalIsInZoo_h
#include <stdio.h>
#include <iostream>
#include <stdlib.h> 
using namespace std;

class AnimalIsInZoo {
   public:
        AnimalIsInZoo(Animal animal_obj);
        AnimalIsInZoo();
        void display();

   private:
        Animal animal;
        int numAnimals;
};
#endif
