#include"Instrument.h"
#include <iostream>
using namespace std;
class Guitar : public Instrument
{
public:
	Guitar(string company, int price, string type): Instrument(company, price) {
		this->type = type;
	}
	string getType()
	{
		return type;
	}
	

private:
	string type;
};

