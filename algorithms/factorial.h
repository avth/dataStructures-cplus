#pragma once

#include "algorithms.h"

class factorial : public algorithms {
private:
	int nthNumber, count, factorial_result;
public:
	factorial();
	~factorial();
	void getUserInput();
	int computeFactorial(int);
};
