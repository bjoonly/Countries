#include<iostream>
#include"Berlin.h"
#include"Canberra.h"
#include"Kyiv.h"
using namespace std;

int main() {
	Ukraine::Kyiv k(2800000);
	German::Berlin b(3769495);
	Australia::Canberra c(426704);
	cout << "Population of Kyiv > Population of Canaberra? "<<boolalpha<< (k.GetPopulation() > c.GetPopulation());
	cout << "\nKyiv " << k.GetPopulation() << " and Canberra " << c.GetPopulation();
	cout << "\nPopulation of Canaberra > Population of Berlin? " << boolalpha << (c.GetPopulation() > b.GetPopulation());
	cout << "\nCanaberra " << c.GetPopulation() << " and Berlin " << b.GetPopulation() << endl;
	return 0;
}