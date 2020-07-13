#pragma once
#include<iostream>
#include<string>
using namespace std;
namespace Australia {
	class Canberra {
		string name;
		int population;
	public:
		Canberra(int population);
		int  GetPopulation()const;
		void Show()const;
	};
}

