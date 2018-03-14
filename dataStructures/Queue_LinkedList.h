#pragma once

/*
* @Author 		:	Amsavarthini Easwaran
* @Date Started	:	03-05-2018
*/
#include "dataStructures.h"
#include <iostream>
using namespace std;

typedef int queueKey;

class Queue_LinkedList : public datastructures {
public:
	Queue_LinkedList();
	~Queue_LinkedList();
	void dsInfo();
	void getInput();
	void enqueue(queueKey inpQue);
	queueKey dequeue();
	void traverseQueue();
private:
	queueKey * queue;
	char queCh;
	int queOpCh, num, poppedValue;
	bool queueLLEmpty;
	struct node {
		queueKey data;
		struct node *next;	//	points to the next node
		struct node *prev;	//	points to the prev node
	};
	struct node *head, *last, *traQueList, *exitNode;	//	head,last are pointers of type node
};
