#pragma once

/*
* @Author	:	Amsavarthini Easwaran
* @Started	:	03-06-2018
*
* Class Name	:	euclid
*/

#include "algorithms.h"

class euclid : public algorithms {

private:
	int numerator, denominator;
	int temp, gcd;

public:
	euclid();
	void algoInfo();
	void enterNumDen();
	int computeGCD();
	void printGCD(int);
	~euclid();
};
