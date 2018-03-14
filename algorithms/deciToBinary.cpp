/*
*@Author	:	Amsavarthini Easwaran
*@Started	:	2017-03-22
 */
#include <iostream>
using namespace std;
#include "binaryNumber.h"
#include "conversion.h"

typedef int itemType1;

BinaryNumber::BinaryNumber() {
	deciNum=actualDeciNum=quotient=reminder=i=0;
	binNumber=new itemType1[10];
	for(int x=0;x<10;x++) { binNumber[x]=0;}
}

BinaryNumber::~BinaryNumber(){
}

void BinaryNumber::conversionInfo() {
	deciNum=actualDeciNum=quotient=reminder=i=0;
	binNumber=new itemType1[10];
	for(int x=0;x<10;x++) { binNumber[x]=0;}
	BinaryNumber::getInput();
}

void BinaryNumber::getInput() {
	cout<<"\n Enter Decimal Number:";
	cin>>deciNum;

	actualDeciNum=deciNum;
	
	while(deciNum!=1) {
		quotient=deciNum/2;
		reminder=deciNum%2;
		binNumber[i]=reminder;
		i++;
		deciNum=quotient;
	}
	binNumber[i]=deciNum;

	cout<<" Binary # For\t"<<actualDeciNum<<"\t:\t";
	for(int last=i;last>=0;last--) {
		cout<<binNumber[last];
	}
}
