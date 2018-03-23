#include "InsertionSort.h"
#include "iostream"
using namespace std;


InsertionSort::InsertionSort()
{
	count = 0;
}


InsertionSort::~InsertionSort()
{
}

void InsertionSort::enterCountAndNumbersInArray(int inputArr[]) {
	cout << "\n enter the count of #s to sort : " << "\t";
	cin >> count;
	cout << "\n enter number in the array:" << "\t";
	for (int j = 0;j < count;j++) {
		cin >> inputArr[j];
	}

	InsertionSort::printOriginalArr(inputArr, count);
}

void InsertionSort::printOriginalArr(int inputArr[], int) {
	cout << "\n Numbers in the original array:";
	for (int i = 0;i < count;i++) {
		cout << inputArr[i];
	}
	cout << endl;
}

void InsertionSort::sortInsertion(int arrToSort[], int count) {
	int tempValue = 0;
	int start = 0;
	int next = 0;
	int index = 0;

	for (start = 0;start < count;) {
		if (index >= 1) {
			next = index;
		}
		else {
			next = start + 1;
		}
		if (arrToSort[next] < arrToSort[start]) {
			tempValue = arrToSort[start];
			arrToSort[start] = arrToSort[next];
			arrToSort[start] = tempValue;

			/*	move the index to next value of 'j'	*/
			index = next + 1;
		}	//	if loop ends here
	}	//	for loop for 'i' ends here

}
