#pragma once

/*
* @Author 		:	Amsavarthini Easwaran
* @Date Started	:	03-05-2018
*/

#include "dataStructures.h"
#include <iostream>
using namespace std;

typedef int queueArr;

class Queue_Array : public datastructures {
public:
	Queue_Array();
	~Queue_Array();
	void dsInfo();
	void getInput();
	void getSizeOfArray();
	void initializeArray();
	void enqueue(queueArr inpQue);
	queueArr dequeue();
	bool isQueueFull();
	void traverseQueue();
private:
	queueArr * queue;
	char queCh;
	int sizeOfArray, queOpCh;
	int num, poppedValue;
	int head, tail;
	int head_position, tail_position;
	bool queueFull;
};
