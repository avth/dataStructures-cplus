#pragma once
/*
* @Author	:	Amsavarthini Easwaran
* @Started	:	03-06-2018
*/
#include "algorithms.h"

class primeNos : public algorithms {
private:
	int i, j, countOfPrime, *primeNosArr;
public:
	primeNos();
	~primeNos();
	void getInput();
	void sieveOfEratosthenes();
	void printPrimeNos();
	void algoInfo();
};
