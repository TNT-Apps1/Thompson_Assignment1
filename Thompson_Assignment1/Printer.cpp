#include "pch.h"
#include "Printer.h"


Printer::Printer()
{
}


Printer::~Printer()
{
}

void Printer::displayResult(string name, double theirBMI)
{
	
	cout << "\n\n" << name << " has a calculated BMI of " << theirBMI << "\n\nThis result puts the patient in the ";

	if (theirBMI < 18.5) {
		cout << "under-weight";
	}
	else if (theirBMI > 25) {
		cout << "over-weight";
	}
	else {
		cout << "normal-weight";
	}

	cout << " catagory.\n\n";
}
