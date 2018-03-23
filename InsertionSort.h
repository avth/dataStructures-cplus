#pragma once
#include "c:\Users\AmsEaswaran\source\repos\dataStructures-cplus\sortingAlgorithms\sortAlgorithms.h"

#define MAX 50

class InsertionSort :
	public sortAlgorithms
{
public:
	InsertionSort();
	~InsertionSort();
	void enterCountAndNumbersInArray(int[]);
	void printOriginalArr(int[], int);
	void sortInsertion(int[], int);

private:
	int inputArr[MAX];
	int count;
};

