#pragma once
/*	AUTHOR	:	AMSAVARTHINI EASWARAN
*	DATE	:	03-06-2018
*/
#include "linkedListInfo.h"

typedef int itemIntType;

class LinkedList : public LinkedListInfo {
private:
	struct node {
		int key;
		struct node *next;
	};
	struct node *head, *last, *traLL, *searchNodes, *currentNode, *previousNode;
	bool llistEmpty, searchResult, delNodeResult;
	char llChoice;
	int llOpChoice;
	itemIntType llValue, positionOfNode, seaNum, delNode;
public:
	LinkedList();
	~LinkedList();
	void getInput();
	void insertToLL(itemIntType v);
	void traverseLL();
	bool deleteFromLL(itemIntType);
	bool searchLL(itemIntType v);
	void llInfo();
	itemIntType getSearchInput();
	itemIntType getDelNumInput();
	bool checkLLEmpty();
	void printSearchResult(bool, itemIntType, itemIntType);
	void printDeleteResult(bool, itemIntType);
};

