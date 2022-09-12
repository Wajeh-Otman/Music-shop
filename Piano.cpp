#include"Instrument.h"
#include <iostream>
using namespace std;

class Piano :public Instrument
{
public:
	Piano(string Acompany, int Aprice, int Aoctaves) : Instrument(Acompany, Aprice)
	{
		octaves = Aoctaves;
	}
	int getOctaves()
	{
		return octaves;
	}



private:
	int octaves;
};

