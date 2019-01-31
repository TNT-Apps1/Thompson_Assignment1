#include "pch.h"
#include "Calc.h"


Calc::Calc()//constructor
{
}


Calc::~Calc()//destructor
{
}

void Calc::bmiControl()
{
	if (oneTime == 0) {
		//displays a message that describes the app
		cout << "\n\n\tThis app will calculate your patients BMI (Body Mass Index) for you.\n\n\n";

		system("PAUSE");
		oneTime++;
		system("cls");
	}
	
	//get patints name
	cout << "\n\n>> Please enter a patients name.\n";
	cin >> name;

	//get the user height
	cout << "\n\n>> Enter patients height in inches.\n";
	cin >> height;

	//get the user weight
	cout << "\n\n>> Enter patients weight in lbs.\n";
	cin >> weight;

	//calculate the user BMI
	result = calculatBMI(height, weight);

	//cout << result;

	
}

double Calc::calculatBMI(double calcHeight, double calcWeight)
{

	double theirBMI;

	//BMI = Weight x 703/Height2
	theirBMI = calcWeight * 703 / (height * height);

	return theirBMI;
}

double Calc::getResult()
{
	return result;
}

string Calc::getName()
{
	return name;
}
