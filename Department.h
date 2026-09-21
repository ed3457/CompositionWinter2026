#pragma once
#include <string>
#include "Address.h"
using namespace std; 

class Department
{  
private: 
	string name; 
	Address deptAddress;

public:

	void printInfo();

	void setName(string n);
	string getName(); 

	void setAddress(Address a);
	Address getAddress();

};

