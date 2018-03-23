#define MAX_SIZE 10

#include "VowelIndex.h"
#include <string>
#include <iostream>
using namespace std;

VowelIndex::VowelIndex()
{
}


VowelIndex::~VowelIndex()
{
}

void VowelIndex::checkVowelIndex(string word,int wordLength) {
	char arr_word[MAX_SIZE];
	int vowel[MAX_SIZE];
	int index = 0;
	int vowel_sub = 0;
	int *ptr_vowel;

	ptr_vowel = &vowel[0];


	/*	Initializing the array	*/
	for (int i = 0;i < MAX_SIZE;i++) {
		arr_word[i] = vowel[i] = 0;
	}

	for (int i = 0;i < wordLength;i++) {
		char letter = word[i];

		switch (letter) {
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			index = i;
			vowel[vowel_sub] = index + 1;
			index = 0;
			vowel_sub++;
			break;
		}	//	switch case ends here
	}	//	for loop ends here
	cout << "\n contents in the array :";
	cout << "[";
	for (int i = 0;i < vowel_sub;) {
		cout << vowel[i];
		if (i + 1 == vowel_sub) {
			break;
		}
		else {
			i++;
			cout << ",";
		}
	}
	cout << "]";
}	//	method ends here
