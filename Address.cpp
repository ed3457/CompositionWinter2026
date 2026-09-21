#include "Address.h"
#include <iostream>
using namespace std;
void Address::printAddress()
{
	cout << getStreetName() << endl;
	cout << getCity() << endl;
	cout << getZipCode() << endl;

}

void Address::setStreetName(string streetName)
{
	this->streetName = streetName;

}

string Address::getStreetName()
{
	return streetName;
}

void Address::setZipCode(string zipCode)
{
	this->zipcode = zipCode;
}

string Address::getZipCode()
{
	return zipcode;
}

void Address::setCity(string city)
{
	this->city = city; 
}

string Address::getCity()
{
	return city;
}

Address::Address()
{
	setStreetName("Not set yet");
	setZipCode("Not set yet");
	setCity("Not set yet");
}

Address::Address(string streetName, string zipCode, string city)
{
	setStreetName(streetName);
	setZipCode(zipCode);
	setCity(city);
}
