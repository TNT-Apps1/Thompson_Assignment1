#ifndef PRINTER_H //include guard prevents header froom being defined twice
#define PRINTER_H
#include <string>
#include <iostream>

using namespace std;

class Printer
{
public:
	Printer();
	~Printer();
	void displayResult(string, double);
};

#endif // !PRINTER_H