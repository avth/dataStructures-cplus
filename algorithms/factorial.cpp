/*
 *	IMPLEMENT THE FACTORIAL ALGORITHM
 */

#include <iostream>
using namespace std;

#include "factorial.h"

factorial::factorial() {
	nthNumber=0;
	count=0;
	factorial_result=0;
}
factorial::~factorial() {
	factorial_result=count=0;
}

void factorial::getUserInput() {
	cout<<"\n Enter the number to compute the factorial :";
	cin>>nthNumber;
	while (count <= nthNumber) {
		factorial_result=factorial::computeFactorial(nthNumber);
		count++;
	}
	cout<<"\n Factorial of number :"<<factorial_result;
}

int factorial::computeFactorial(int n) {
	if (n==1||n==0) return 1;
	if (n>1) return n * factorial::computeFactorial(n-1);
}
