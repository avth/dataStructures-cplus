#pragma once

/*
*@Author	:	Amsavarthini Easwaran
*@Started	:	03-06-2018
*/

#include "Conversion.h"
typedef int itemType1;

class BinaryNumber : public Conversion {
public:
	BinaryNumber();
	~BinaryNumber();
	void conversionInfo();
	void getInput();
private:
	int deciNum, actualDeciNum, quotient, reminder, i;
	itemType1 *binNumber;
};
