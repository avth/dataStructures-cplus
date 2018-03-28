#pragma once
#include "sortAlgorithms.h"
#define MAX 50

class BubbleSort : public sortAlgorithms {

private:
	int temp;
	int countInLoop, count;
	bool swapped;
	int inputArr[MAX];

public:
	BubbleSort();
	void printOriginalArr(int originalArr[], int max);
	void bubbleSortArr(int arrToSort[], int max);
	void printSortedArr(int sortedArr[], int max);
	virtual void sortAlgoInfo();
	void enterCountAndNumbersInArray(int[]);
	~BubbleSort();
};
