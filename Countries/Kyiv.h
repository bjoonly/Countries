#pragma once
#include<iostream>
#include<string>
using namespace std;
namespace Ukraine {
	class Kyiv {
		string name;
		int population;
	public:
		Kyiv(int population);
		int GetPopulation()const;
		void Show()const;
	};
}


