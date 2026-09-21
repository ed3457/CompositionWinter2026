#pragma once
#include <string>
//#include <regex>
using namespace std; 
class Address
{
private: 
	string streetName;
	string zipcode;
	string city; 

public:

	void printAddress();

	void setStreetName(string streetName);
	string getStreetName();

	void setZipCode(string zc);
	string getZipCode();

	void setCity(string city);
	string getCity();

	Address();

	Address(string streetName, string zipCode, string city);


};

