#include "Department.h"
#include <iostream>
using namespace std; 
void Department::printInfo()
{
	cout << getName() << endl;

	deptAddress.printAddress();

	// or 
	//cout << deptAddress.getStreetName() << endl; 
}

void Department::setName(string n)
{
	name = n;
}

string Department::getName()
{
	return name;
}

void Department::setAddress(Address a)
{
	deptAddress = a;
}

Address Department::getAddress()
{
	return deptAddress;
}
