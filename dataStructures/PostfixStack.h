#pragma once

/*
* @Author 	:	Amsavarthini Easwaran
* @Started	:	03-05-2018
*/

#include <iostream>
using namespace std;
#include "Stack.h"

typedef int postfixItemType;

//	class Stack

//class PostfixStack : public Stack{
class PostfixStack : public datastructures {
private:
	postfixItemType * stack1;
	int p, top, x, postfixStackSize;
	char c;
	bool postfixStackCreated;
public:
	PostfixStack();
	~PostfixStack();
	void push(postfixItemType v);
	postfixItemType pop();
	void getInput();
	void printStackElements();
	void dsInfo();
};
