#include "Animal.h"

Animal::Animal(string speciesName, unsigned int discoveryYear) {
    species = speciesName;
    year_discovered = discoveryYear;
}

void Animal::display() {
    cout << species << " [" << year_discovered << "]" << endl;
}

