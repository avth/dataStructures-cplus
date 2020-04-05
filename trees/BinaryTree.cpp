#include "BinaryTree.h"
/*	AUTHOR	:	AMSAVARTHINI EASWARAN
*	DATE	:	04-09-2018
*/
#include <iostream>
using namespace std;
BinaryTree::BinaryTree()
{
}


BinaryTree::~BinaryTree()
{
}

void BinaryTree::treeAlgorithmsInfo() {
	cout << "\n Implementing Binary Tree";
	BinaryTree::enterChoice();
}

BinaryTree::node* BinaryTree::insertToBinTree(itemTypeForBT v)
{
	return nullptr;
}

BinaryTree::node* BinaryTree::newNode(itemTypeForBT v) {
	struct node *nNode;
	if (root == NULL) {
		nNode = new node;
		nNode->data = v;
		nNode->left = nullptr;
		nNode->right = nullptr;
	}
	else {
		nNode = new node;
		nNode->data = v;
		nNode->left = nullptr;
		nNode->right = nullptr;
	}
	return nNode;
}

void BinaryTree::enterChoice() {
	itemTypeForBT nData;
	int userChoice;
	cout << "\n Binary Tree:";
	cout << "\n 1. Enter New Node";
	cout << "\n 2. Traverse Binary Tree";
	cout << " Enter Choice :";
	cin >> userChoice;
	
	switch (userChoice) {
	case 1:
		cout << "Enter Data";
		cin >> nData;
		newNode(nData);
		break;
	case 2:
		traverseBinaryTree(root->data);
	}
	
	newNode(nData);
}

void BinaryTree::traverseBinaryTree(itemTypeForBT v) {

	for (;root->data!=NULL;) {
		cout << root->data;
		cout << root->left;
		cout << root->right;

		root = root->left;
		traverseBinaryTree(root->data);
	}
}