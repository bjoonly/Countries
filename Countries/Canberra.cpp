#include "Canberra.h"
Australia::Canberra::Canberra(int population) :name("Canaberra"), population(population) {}

int Australia::Canberra::GetPopulation() const {
	return population;
}

void Australia::Canberra::Show() const {
	cout << name << " " << population << endl;
}
