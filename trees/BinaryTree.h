#pragma once
/*	AUTHOR	:	AMSAVARTHINI EASWARAN
*	DATE	:	04-09-2018
*/
#include "c:\Users\AmsEaswaran\source\repos\dataStructures-cplus\trees\TreeAlgorithms.h"

typedef int itemTypeForBT;

class BinaryTree :
	public TreeAlgorithms
{
private:
	struct node {
		int data;
		struct node *left;
		struct node *right;
		struct node *next;
	};
	struct node *head, *tail, *root;

public:
	BinaryTree();
	~BinaryTree();
	void treeAlgorithmsInfo();
	node* insertToBinTree(itemTypeForBT v);
	node* newNode(itemTypeForBT v);
	void enterChoice();
	void traverseBinaryTree(itemTypeForBT v);
};

