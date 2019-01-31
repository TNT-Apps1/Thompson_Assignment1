#ifndef CALC_H //include guard prevents header froom being defined twice
#define CALC_H
#include <string> // use strings
#include <iostream> // use IN OUT put

using namespace std;

class Calc
{
public:
	Calc();
	~Calc();
	void bmiControl();
	double calculatBMI(double, double);
	double getResult();
	string getName();
private:
	double height;
	double weight;
	double result;
	string name;
	int oneTime = 0;
};

#endif // !CALC_H