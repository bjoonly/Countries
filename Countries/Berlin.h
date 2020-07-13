#pragma once
#include<iostream>
#include<string>
using namespace std;
namespace German {
	class Berlin {
		string name;
		int population;
	public:
		Berlin(int population);
		int  GetPopulation()const;
		void Show()const;
	};
}
