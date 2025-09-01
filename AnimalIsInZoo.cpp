#include "Animal.h"
#include "AnimalIsInZoo.h"

AnimalIsInZoo::AnimalIsInZoo(Animal animal_obj) {
    animal = animal_obj;
    numAnimals = 1;
}

AnimalIsInZoo::AnimalIsInZoo() {
    numAnimals = 0;
}

void AnimalIsInZoo::display() {
    cout << numAnimals << " animal: ";
    if (numAnimals == 1) {
        animal.display();
    }
}