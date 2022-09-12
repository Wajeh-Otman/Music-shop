
#include <iostream>
#include<string>
#include <vector>
#include"Instrument.h"
#include"Guitar.cpp"
#include"Piano.cpp"

using namespace std;
int Instrument::sedori = 1;
vector<Instrument> list;

void add(Instrument i)
{
	list.push_back(i);
}

Instrument get(int serial) {

	Instrument res("", 0);
	for (Instrument temp : list) {
		if (serial == temp.getSerial()) {
			res = temp;
		}
	}
	return res;
}
void sell(int serial) {
	bool exist = false;
	Instrument sel("", 0);
	int count = 0, index = 0, cnt = 0;

	for (Instrument temp : list) {//check if there is an instrument with the same serial number
		if (serial == temp.getSerial()) {
			exist = true;
			sel = get(temp.getSerial());
			index = cnt;
		}
		cnt++;
	}
	if (!exist) {
		cout << "Selling a non-existent item" << endl;
	}

	else {
		cout << "Selling instrument with serial number: " << serial << endl;
		list.erase(list.begin() + index);
	}
	cout << endl;
}

vector<int>  allSerials() {
	vector<int> serials;
	for (Instrument temp : list) {

		serials.push_back(temp.getSerial());
	}
	return serials;
}

void printInstrument(vector<int> serialList) {
	cout << "All instruments serial number : " << endl;
	for (size_t i = 0; i < serialList.size(); i++)
	{
		cout << serialList.at(i) << endl;
	}
	cout << endl;
}

int main()
{
	vector<int> serialList;


	add(Guitar("Gibson", 1000, "Acoustic"));
	add(Piano("Yamaha", 5000, 6));
	add(Piano("Yamaha", 10000, 7));
	add(Guitar("Fender", 4000, "Electric"));

	
	serialList = allSerials();
	printInstrument(serialList);
	sell(2);
	sell(2);
	sell(4);

	serialList = allSerials();
	printInstrument(serialList);
	
	return 0;
}

