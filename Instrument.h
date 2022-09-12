#pragma once
#include<string>
#include <iostream>
using namespace std;
class Instrument
{
protected:
	static int sedori;

public:
	Instrument(string company, int price) {
		this->company = company;
		this->price = price;
		this->serial = sedori++;
	}
	int getPrice() {
		return price;
	}
	string getCompany() {
		return company;
	}
	int getSerial() {
		return serial;
	}


private:
	int price;
	int serial;
	string company;


};


