#pragma once
/*
*@Author		:	Amsavarthini Easwaran
*@Date Started	:	03-23-2017
*/

#include "dataStructures.h"
#include <iostream>
using namespace std;

typedef char itemCharType;

class Stack_LinkedList : public datastructures {
public:
	Stack_LinkedList();
	~Stack_LinkedList();
	void dsInfo();
	void getInput();
	void push(itemCharType v);
	itemCharType pop();
	void traverse();
	bool isEmpty();
private:
	char stChoice, stValue;
	itemCharType poppedValue;
	int stOpChoice;
	bool stackLLEmpty;
	struct node {
		itemCharType key;
		struct node *next;
	};
	struct node *head, *last, *traList, *popNode;
};
