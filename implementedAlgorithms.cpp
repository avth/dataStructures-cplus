/*
 *
 *   /\    |             .  |  |
 *  /- \   | --- ---  |- | - - |    |\  /|  ---
 *	/    \  |( _||   | |  |  |  | -| | \/ |  |__
 *	          _ | ---  |  |  |  |  | |    |   __|
 *
 *
 */

#define VOWEL_MAX 10

#include <stdlib.h>
#include<iostream>
#include<string>

using namespace std;

#include "./algorithms/algorithms.h"
#include "./algorithms/binaryNumber.h"
#include "./algorithms/Conversion.h"
#include "./algorithms/euclid.h"
#include "./algorithms/factorial.h"
#include "./algorithms/josephus.h"
#include "./algorithms/primeNums.h"

#include "./dataStructures/dataStructures.h"
#include "./dataStructures/PostfixStack.h"
#include "./dataStructures/Queue_Array.h"
#include "./dataStructures/Queue_LinkedList.h"
#include "./dataStructures/Stack.h"
#include "./dataStructures/Stack_LinkedList.h"

#include "./linkedLists/linkedListInfo.h"
#include "./linkedLists/linkedList.h"

#include "./sortingAlgorithms/sortAlgorithms.h"
#include "./sortingAlgorithms/bubbleSort.h"
#include "./sortingAlgorithms/InsertionSort.h"
#include "./randomAlgorithms/DigPow.h"
#include "./randomAlgorithms/VowelIndex.h"

#include "./trees/TreeAlgorithms.h"
#include "./trees/BinaryTree.h"

class MainDisplay {

public:
	MainDisplay();
	~MainDisplay();
	void displayOptions();
	void dataStructures();
	void sortingAlgorithms();
	void linkedListAlgorithms();
	void random_algorithms();
	void enterCountAndNumbersInArray(int[]);
	void euclidAlgorithm();
	void josephusAlgorithm();
	void sievePrimeNos();
	void conversion();
	void recursionAlgorithms();
	void realAlgorithms();
	void treeOperations();

private:
	char algoChoice, userChoice;
	int convChoice, dsChoice, alChoice, llChoice, sortChoice, count;
	int ranAlgCh;
};

MainDisplay::MainDisplay() {
	cout << "\nConstructing MainDisplay:";
	userChoice = 'y';
	algoChoice = ' ';
	dsChoice = sortChoice = count = 0;
}

MainDisplay::~MainDisplay() {
	cout << "Destructing MainDisplay:";
}

void MainDisplay::displayOptions() {

	while (userChoice == 'y') {

		cout << "\nData Structures & Algorithms Implemented In C++\n";
		cout << "--------------------" << endl;
		cout << "A. SORTING" << endl;
		cout << "B. LINKED LIST" << endl;
		cout << "C. ARRAYS " << endl;
		cout << "D. TREES" << endl;
		cout << "E. STRINGS" << endl;
		cout << "F. GRAPHS" << endl;
		cout << "G. DYNAMIC PROGRAMMING" << endl;
		cout << "H. ALGORITHMS" << endl;
		cout << "I. DATA STRUCTURES" << endl;
		cout << "J. RANDOM ALGORITHMS" << endl;
		cout << "Q.Quit" << endl;
		cout << "Enter Algorithm Choice:";
		cin >> algoChoice;

		switch (algoChoice) {

		case 'A':
		case 'a':
			//MainDisplay::dataStructures();
			MainDisplay::sortingAlgorithms();
			break;
		case 'B':
		case 'b':
			MainDisplay::linkedListAlgorithms();
			//	MainDisplay::sortingAlgorithms();
			break;
		case 'C':
		case 'c':
			//	MainDisplay::euclidAlgorithm();
			break;
		case 'D':
		case 'd':
			//	MainDisplay::sievePrimeNos();
			MainDisplay::treeOperations();
			break;
		case 'E':
		case 'e':
			//	MainDisplay::josephusAlgorithm();
			break;
		case 'F':
		case 'f':
			//	MainDisplay::conversion();
			break;
		case 'G':
		case 'g':
			//	MainDisplay::recursionAlgorithms();
			break;
		case 'H':
		case 'h':
			MainDisplay::realAlgorithms();
			break;
		case 'I':
		case 'i':
			MainDisplay::dataStructures();
			break;
		case 'J':
		case 'j':
			MainDisplay::random_algorithms();
			break;
		case 'Q':
		case 'q':
			cout << "\n Quitting Application";
			break;
		default:
			cerr << "\nWrong Choice .";
		}
		if ((algoChoice == 'q') | (algoChoice == 'Q'))
			exit(0);
		cout << "\n Do You Want To Do Another Operation. Continue (y/n) ? ";
		cin >> userChoice;
		if (userChoice == 'n') {
			exit(0);
		}
	}
}

void MainDisplay::recursionAlgorithms() {
	char userChoice = 'y';
	int recursionChoice;

	factorial fact;

	cout << "\n1.Factorial Algorithm:";
	cin >> recursionChoice;
	while (userChoice == 'y') {
		switch (recursionChoice) {
		case 1:
			fact.getUserInput();
			break;
		default:
			cerr << "\n wrong choice:";
			break;
		}
		cout << "\n do you want to continue recursion algorithms (y/n) ?";
		cin >> userChoice;
		if (userChoice == 'n')
			break;
		else
			continue;
	}
}

void MainDisplay::treeOperations() {
	TreeAlgorithms taObj, *taPtr;
	BinaryTree btObj;

	taPtr = &taObj;
	taPtr->treeAlgorithmsInfo();

	char uChoice = 'y';
	int treeOperationCh;

	while (uChoice == 'y') {

		cout << "\n 1. Binary Tree";
		cout << "\n Enter Choice :";
		cin >> treeOperationCh;

		switch (treeOperationCh) {
		case 1:
			taPtr = &btObj;
			taPtr->treeAlgorithmsInfo();
			break;
		default:
			cout << "\n Wrong Choice";
		}	//	switch loop ends here

		cout << "\n Do you want to continue again ?";
		cin >> uChoice;
		if (uChoice == 'y') {
			continue;
		}
		else {
			break;
		}
	}	//	while loop ends here	
}


void MainDisplay::conversion() {
	Conversion convObj, *convPtr;
	BinaryNumber binNumObj;

	convPtr = &convObj;
	convPtr->conversionInfo();

	while (userChoice == 'y') {

		cout << "\n 1. Decimal To Binary Conversion";
		cout << "\n Enter Conversion Choice:\t";
		cin >> convChoice;

		switch (convChoice) {
		case 1:
			convPtr = &binNumObj;
			convPtr->conversionInfo();
			break;
		default:
			userChoice = 'n';
			cerr << "\nWrong Choice";
		}	//	switch case ends here	
		cout << "\n Do you want to Continue Conversion (y/n) ?";
		cin >> userChoice;
		if (userChoice == 'n') {
			userChoice = 'y';
			MainDisplay::displayOptions();
		}
	}	//	while loop ends here
}

void MainDisplay::linkedListAlgorithms() {
	LinkedListInfo lla_Obj, *lla_Ptr;
	LinkedList llObj;

	lla_Ptr = &lla_Obj;
	lla_Ptr->llInfo();

	while (userChoice == 'y') {

		cout << "\n 1. Linked List:";
		cin >> llChoice;

		switch (llChoice) {
		case 1:
			lla_Ptr = &llObj;
			lla_Ptr->llInfo();
			break;
		default:
			userChoice = 'n';
			cerr << "\nWrong Choice.\n";
		}	//	switch case ends here
		MainDisplay::displayOptions();
	}		//	while loop ends here
}			//	linkedListAlgorithms method ends here

void MainDisplay::dataStructures() {
	datastructures dsObj, *dsPtr;
	Stack stObj;	//	implementing stack using array
	PostfixStack pfsObj;
	Stack_LinkedList stLlObj;
	Queue_Array queArrObj;
	Queue_LinkedList queLlObj;

	dsPtr = &dsObj;
	dsPtr->dsInfo();

	while (userChoice == 'y') {

		cout << "\n 1. Stacks - Implemented By Arrays";
		cout << "\n 2. Postfix Stack Operation";
		cout << "\n 3. Stacks - Implemented By LinkedList";
		cout << "\n 4. Queues - Implemented By Arrays";
		cout << "\n 5. Queues - Implemented By Linked Lists";
		cout << "\n Enter Data Structure Choice:\t";
		cin >> dsChoice;

		switch (dsChoice) {
		case 1:
			dsPtr = &stObj;
			dsPtr->dsInfo();
			break;
		case 2:
			dsPtr = &pfsObj;
			dsPtr->dsInfo();
			break;
		case 3:
			dsPtr = &stLlObj;
			dsPtr->dsInfo();
			break;
		case 4:
			dsPtr = &queArrObj;
			dsPtr->dsInfo();
			break;
		case 5:
			dsPtr = &queLlObj;
			dsPtr->dsInfo();
			break;
		default:
			userChoice = 'n';
			cerr << "\nWrong Choice.\n";
		}
		cout << "\n Do You Want To Do Another Data Structure Operation. Continue (y/n) ? ";
		cin >> userChoice;
		if (userChoice == 'n') {
			userChoice = 'y';
			MainDisplay::displayOptions();
		}
	}
}


void MainDisplay::random_algorithms() {

	int base, exp, exponent_result;
	string word;
	int length_of_word = 0;
	
	DigPow dp;
	VowelIndex vi;

	while (userChoice == 'y') {
		cout << "\n 1. Number Exponent";
		cout << "\n 2. Vowel Index";
		cout << " \n Enter Choice : ";
		cin >> ranAlgCh;

		switch (ranAlgCh) {
		case 1:
			cout << "\t Enter Positive Integer:";
			cin >> base;
			cout << "\t Enter Positive Exponent:";
			cin >> exp;
			exponent_result = dp.digPow(base, exp);
			cout << "\n Result : " << exponent_result;
			break;

		case 2:
			cout << "\t Enter word:";
			cin >> word;
			length_of_word = word.length();
			vi.checkVowelIndex(word, length_of_word);
			break;
		default:
			userChoice = 'n';
			cerr << "Wrong Random Algorithm Choice";
		}	//	switch loop ends here
		cout << "\n Do you want to continue the random algorithms [Y/N] ?";
		cin >> userChoice;
		if (userChoice == 'n' || userChoice == 'N')
			break;
	}	//	while loop ends here
}	//	class ends here

void MainDisplay::realAlgorithms() {
	algorithms alObj, *alPtr;

	alPtr = &alObj;
	alPtr->algoInfo();

	while (userChoice == 'y') {
		cout << "\n 1. Conversion";
		cout << "\n 2. Euclid ";
		cout << "\n 3. Recursion ";
		cout << "\n 4. Josephus ";
		cout << "\n 5. Sieve Of Eratosthenes ";
		cout << "\n Enter Algorithm Choice:\t";
		cin >> alChoice;

		switch (alChoice) {
		case 1:
			MainDisplay::conversion();
			break;
		case 2:
			MainDisplay::euclidAlgorithm();
			break;
		case 3:
			MainDisplay::recursionAlgorithms();
			break;
		case 4:
			MainDisplay::josephusAlgorithm();
			break;
		case 5:
			MainDisplay::sievePrimeNos();
			break;
		default:
			userChoice = 'n';
			cerr << "\n Wrong choice";
		}	//	switch case ends here
	}	//	while loop ends here
}	//	algorithms method ends here

void MainDisplay::sortingAlgorithms() {

	sortAlgorithms sortObj, *sortPtr;
	BubbleSort bsort;
	InsertionSort iSort;

	sortPtr = &sortObj;
	sortPtr->sortAlgoInfo();

	cout << "\t\n1.Bubble Sort" << endl;
	cout << "2.Insertion Sort" << endl;
	cout << "\nSelect Sorting Algorithm:\t";
	cin >> sortChoice;

	switch (sortChoice) {
	case 1:
		sortPtr = &bsort;
		sortPtr->sortAlgoInfo();
		break;
	case 2:
		sortPtr = &iSort;
		sortPtr->sortAlgoInfo();
		break;
	default:
		cout << "\n Incorrect Choice. Exiting." << endl;
		exit(0);
	}
}

void MainDisplay::euclidAlgorithm() {
	algorithms alObj, *alPtr;
	euclid egcd;	//	'egcd' is the object of type euclid

	alPtr = &alObj;
	alPtr->algoInfo();
	alPtr = &egcd;
	alPtr->algoInfo();
}

void MainDisplay::sievePrimeNos() {

	algorithms alObj, *alPtr;
	primeNos pn; //	primeNos is the class ; 'pn' is the type of class primeNos

	alPtr = &alObj;
	alPtr->algoInfo();
	alPtr = &pn;
	alPtr->algoInfo();
}

void MainDisplay::josephusAlgorithm() {
	algorithms alObj, *alPtr;
	josephus joe; 	//	joe is the type of class josephus

	alPtr = &alObj;
	alPtr->algoInfo();
	alPtr = &joe;
	alPtr->algoInfo();

	//	joe.getInput();
	//	joe.eliminatePersons();
}

void MainDisplay::enterCountAndNumbersInArray(int inputArr[]) {
	int count, i;

	cout << "\nenter the count of #s to Sort:" << "\t";
	cin >> count;

	cout << "\nenter #s in the array:" << "\t";
	for (i = 0; i < count; i++) {
		cin >> inputArr[i];
	}
}

int main() {

	//	system("clear");

	MainDisplay mdObj, *mdPtr;
	mdPtr = &mdObj;
	mdPtr->displayOptions();
}
