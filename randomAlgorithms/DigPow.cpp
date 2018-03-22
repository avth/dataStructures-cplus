/*
@author : Amsavarthini Easwaran
@date : 03-20-2018
*/

#include "DigPow.h"
#include <iostream>
#include <string>
using namespace std;

#define MAX_SIZE 10

DigPow::DigPow()
{
}


DigPow::~DigPow()
{
}

int DigPow::digPow(int n, int p) {

	bool length_of_num_reached = false;
	string num;
	int length_of_number=0, result=0;
	char numbers_in_array[MAX_SIZE];
	int num_array_index = 0;
	int base=0, exponent=0, actual_base=0,actual_exponent = 0;
	int quotient = 0;
	int reminder = 0;

	/* intializing the array */
	for (int j = 0;j < MAX_SIZE;j++) {
		numbers_in_array[j] = 0;
	}

	cout << "\n Base :" << n;
	cout << "\n Exponent :" << p;

	actual_exponent = p;

	/* 	convert the base # to String	*/
	num = to_string(n);

	/*	get the length of the number */
	length_of_number = num.length();

	/*	store each number in an index in the array	*/
	for (int i = 0;i < length_of_number;i++) {
		numbers_in_array[i] = num[i];
	}
	
	/*	while the length of the number !=0 */
	
	while (!length_of_num_reached) {
		/*	retrieve the single number from the array*/
		char temp_char = numbers_in_array[num_array_index];
		/*	convert to char to integer*/
		int temp_int = temp_char - '0';
		/* assigning of the values to the variables	*/
		base = temp_int;
		actual_base = base;
		exponent = actual_exponent;

		/* check if the exponent is 1. If 1, multiply the base and the exponent.*/
		if (exponent == 1) {
			result = base * exponent;
		}

		/*	if the exponent is greater than 1, multiply, assign and subtract the exponent.	*/
		while (exponent > 1) {
			base = base * actual_base;
			exponent--;
		}

		/*	add the result in this loop.	*/
		if (actual_exponent != 1) {
			result = result + base;
		}
		
		/*	check if the array index is equal to the length of the number. 
		if yes, set the boolean value to true and break the loop.
		*/
		if (num_array_index == length_of_number - 1) {
			length_of_num_reached = true;
		}
		/*	Else, set the base to 0, increment the array index and the actual exponent.
		*/
		else {
			base = 0;
			num_array_index++;
			actual_exponent++;
		}
	}	//	while loop for checking the length_of_num_reached ends here
	cout << "\n Result is :" << result;

	/*	Divide the result by the actual base 'n'. If the result is divisible by 'n', return the quotient.
		Else return -1.
	*/
	quotient = result / n;
	reminder = result % n;
	if (reminder == 0) {
		return quotient;
	}
	else {
		return -1;
	}
	
	return 0;
}
