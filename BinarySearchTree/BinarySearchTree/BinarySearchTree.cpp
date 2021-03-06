// BinarySearchTree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include<string>
#include <vector>


// Structure of a binary tree
struct BSTNode
{
	int data;
	BSTNode *left;
	BSTNode *right;
};

// Funciton to create new node in the heap

BSTNode* NewNode(int data)
{
	BSTNode* newNode = new BSTNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

bool Search(BSTNode* root, int data)
{
	if(root == NULL) {
		return false;
	}
	else if (root->data == data) {
		return true;
	}
	else if (data <= root->data) {
		return Search(root->left, data);
	}
	else {
		return Search(root->right, data);
	}
}

BSTNode* Insert(BSTNode* root, int data)
{
	
	if (root == NULL)
	{
		root = NewNode(data);
	}
	else if (data <= root->data)
	{
		root->left = Insert(root->left, data);

	}
	else
	{
		root->right = Insert(root->right, data);
	}
	return root;
}
int main()
{
	BSTNode* root = NULL;  // Creating an empty tree
						   /*Code to test the logic*/
	root = Insert(root, 15);
	root = Insert(root, 10);
	root = Insert(root, 20);
	root = Insert(root, 25);
	root = Insert(root, 8);
	root = Insert(root, 12);
	// Ask user to enter a number.  
	int number;
	cout << "Enter number be searched\n";
	cin >> number;
	//If number is found, print "FOUND"
	if (Search(root, number) == true) cout << "Found\n";
	else cout << "Not Found\n";
	
	system("pause");
    return 0;
}

