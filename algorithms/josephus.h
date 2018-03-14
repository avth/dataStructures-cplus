#pragma once

#include "algorithms.h"

class josephus : public algorithms {
private:
	struct node {
		int key;
		struct node *next;
	};

	struct node *head, *last;

	int N, M, i;

public:
	josephus();
	~josephus();
	void getInput();
	void eliminatePersons();
	void algoInfo();
};
