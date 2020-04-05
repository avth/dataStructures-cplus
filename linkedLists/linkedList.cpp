//	LINKED LIST IMPLEMENTATION
/*	AUTHOR	:	AMSAVARTHINI EASWARAN
 *	DATE	:	05-10-2017
 */
#include <iostream>
using namespace std;

#include "linkedList.h"

typedef int itemIntType;


LinkedList::LinkedList() {
	llChoice = 'y';
	llOpChoice = llValue = positionOfNode = seaNum = 0;
	head = new node;
	last = new node;
	head->next = last;
	last->next = last;
	last->previous = head;
	llistEmpty = true;
	searchResult = false;
}

LinkedList::~LinkedList() {
}

void LinkedList::llInfo() {
	cout << "\n IMPLEMENTING LINKED LIST:";
	LinkedList::getInput();
}

void LinkedList::insertToLL(itemIntType v) {
	struct node *pushNode;
	pushNode = new node;
	int countOfNodes = 0;


	firstNode = head;
	while (firstNode->next != last) {
		firstNode = firstNode->next;
		countOfNodes++;
	}

	if (firstNode->next == last) {
		pushNode->key = v;
		firstNode->next = pushNode;
		pushNode->next = last;
		llistEmpty = false;
	}

	//	working code now
	/*pushNode->key = v;
	pushNode->next = head->next;
	head->next = pushNode;
	llistEmpty = false;*/
}

bool LinkedList::searchLL(itemIntType v) {
	searchNodes = head;
	while (searchNodes->next != last) {
		searchNodes = searchNodes->next;
		positionOfNode++;
		if (v == searchNodes->key) {
			searchResult = true;
			return searchResult;
		}
		else continue;
	}	//WHILE LOOP ENDS HERE
	return false;
}	//	METHOD searchLL ENDS HERE

bool LinkedList::deleteFromLL(itemIntType v)
{
	currentNode = previousNode = head;
	while (currentNode->next != last) {
		currentNode = currentNode->next;
		if (currentNode->key == v) {
			previousNode->next = currentNode->next;
			delete currentNode;
			return true;
		}
		else {
			previousNode = previousNode->next;
		}
	}
	return false;
}

void LinkedList::traverseLL() {
	traLL = head;
	cout << " " << "head-->";
	while (traLL->next != last) {
		traLL = traLL->next;
		cout << traLL->key << "-->";
	}
	cout << "last\n";
}

void LinkedList::reverseLL() {
	reverse = last->previous;
	reverse = reverse->previous;

	cout << " " << "head-->";
	cout << reverse->key << "-->";
	while (reverse->previous != head) {
		reverse = reverse->previous;
		cout << reverse->key << "-->";
	}
	cout << "last\n";
}

bool LinkedList::checkLLEmpty() {
	if (llistEmpty == true) {
		cout << " linked list is empty\n";
	}
	return llistEmpty;
}

itemIntType LinkedList::getSearchInput() {
	cout << " enter # to search:\t";
	cin >> seaNum;
	return seaNum;
}

void LinkedList::printSearchResult(bool searchR, itemIntType seaNum, itemIntType position) {
	if (searchR) {
		cout << " " << seaNum << " is found at position :" << position << "\n";
	}
	else {
		cout << " " << seaNum << " is not present in the linked list" << "\n";
	}
}

itemIntType LinkedList::getDelNumInput() {
	cout << " enter # to delete :";
	cin >> delNode;
	return delNode;
}

void LinkedList::printDeleteResult(bool delNodeResult, itemIntType delNode) {
	if (delNodeResult) {
		cout << " " << delNode << " is deleted from linked list";
	}
}

void LinkedList::getInput() {
	while (llChoice == 'y') {
		cout << "\n 1.insert node ";
		cout << "\n 2.travere linked list";
		cout << "\n 3.search node";
		cout << "\n 4.delete node";
		cout << "\n 5. reverse linked list";
		cout << "\n Enter linked list operation choice:\t";
		cin >> llOpChoice;

		switch (llOpChoice) {
		case 1:
			cout << " Enter value to insert into linked list:\t";
			cin >> llValue;
			LinkedList::insertToLL(llValue);
			break;
		case 2:
			cout << " Values in linked list:\t";
			LinkedList::traverseLL();
			break;
		case 3:
			llistEmpty = checkLLEmpty();
			if (!llistEmpty) {
				LinkedList::traverseLL();
				seaNum = LinkedList::getSearchInput();
				searchResult = LinkedList::searchLL(seaNum);
				LinkedList::printSearchResult(searchResult, seaNum, positionOfNode);
				positionOfNode = 0;
				searchResult = false;
			}
			break;
		case 4:
			llistEmpty = checkLLEmpty();
			if (!llistEmpty) {
				LinkedList::traverseLL();
				delNode = LinkedList::getDelNumInput();
				searchResult = LinkedList::searchLL(delNode);
				LinkedList::printSearchResult(searchResult, delNode, positionOfNode);
				if (searchResult) {
					delNodeResult = LinkedList::deleteFromLL(delNode);
					LinkedList::printDeleteResult(delNodeResult, delNode);
					LinkedList::traverseLL();
					positionOfNode = 0;
					searchResult = false;
				}
			}
			break;
		case 5:
			llistEmpty = checkLLEmpty();
			if (!llistEmpty) {
				LinkedList::traverseLL();
				LinkedList::reverseLL();
			}
		default:
			cerr << " wrong choice";
		}//	SWITCH CASE LOOP ENDS HERE
		cout << " continue another operation (y/n) ?\t";
		cin >> llChoice;
		if (llChoice == 'n')	break;
	}	//	WHILE LOOP ENDS HERE
}	//	METHOD ENDS HERE
