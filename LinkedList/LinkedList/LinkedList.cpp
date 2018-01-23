// LinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
#include<stdio.h>


using namespace std;

struct Node
{
	int data;
	Node* next;
};

struct Node* head;				// Creating a pointer to a node

	void insert(int n, int value)
	{
		Node* temp = new Node();	// create a block of memory of size Node
		
		if (n == 1)
		{
			
			head = temp;				// assigned the address of the first created node to the header

			temp->data = value;
			temp->next = NULL;
		}
		else
		{
			Node* temp1 = new Node();
			temp1->data = value;
			temp1->next = NULL;
			temp->next = temp1;
		}

		while (head->next!= NULL)
		{
			cout << head->data << "--->";
			
		}

		
	}


	int main()
	{ 
		int input = 0;
		int pos = 0;
		int first = 0;
		head = NULL;   // its pointing to NULL

		cout << " Please choose the options" << endl;
		cout << " Insertion of the first element --- 1" << endl;
		cin >> input;
		
		switch(input)
		{
			case 1:cout << "Insertion";
				cout << " Enter the  position at which the data should be inserted " << endl;
				cin >> pos;
				cout << " Enter the  element to be inserted " << endl;
				cin >> first;
				insert(pos,first);
			break;
		};

		system("pause");
		return 0;
	}