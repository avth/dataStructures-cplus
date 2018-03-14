#pragma once

/*
* @Author 	:	Amsavarthini Easwaran
* @Started	:	03-05-2018
*/

#include "dataStructures.h"
#include <cstdio>
#include <ctime>
#include <iostream>
using namespace std;

typedef char itemType;

//	class Stack

class Stack : public datastructures {
private:
	time_t start, stop;
	itemType *stack;
	int p, top, stOpChoice, stackSize;
	char stChoice, stValue;
	bool stackFull, stackCreated;
public:
	Stack();
	~Stack();
	void dsInfo();
	void push(itemType v);
	itemType pop();
	void getInput();
	bool isStackFull();
	bool isStackEmpty();
	void printStackElements();
	//		void howManyElementsInStack();
};
