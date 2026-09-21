// CompositionWinter2026.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Department.h"
#include "Address.h"
int main()
{
	Address hrAddress("Warren Ave", "48202", "Detroit");

	Department hrDept;

	hrDept.setName("HR Dept.");
	hrDept.setAddress(hrAddress);

	hrDept.printInfo();

	// change the zip code to 48101 

	hrDept.getAddress().setZipCode("48101");

	hrDept.printInfo();
}

