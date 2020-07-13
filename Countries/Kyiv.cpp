#include "Kyiv.h"

Ukraine::Kyiv::Kyiv(int population) :name("Kyiv"), population(population) {}

int Ukraine::Kyiv::GetPopulation() const {
	return population;
}

void Ukraine::Kyiv::Show() const {
	cout << name << " " << population << endl;

}
