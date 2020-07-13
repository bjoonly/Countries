#include "Berlin.h"

German::Berlin::Berlin(int population) :name("Berlin"), population(population) {}

int German::Berlin::GetPopulation() const {
	return population;
}

void German::Berlin::Show() const {
	cout << name << " " << population << endl;
}
