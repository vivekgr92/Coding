// PowerSet.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include<string>
#include <vector>
#include<algorithm>


void printPowerSet(char *set, int n)
{
	int size = pow(2, n);
	int counter, j;
	for (counter = 0; counter < size; counter++)
	{
		for (j = 0; j < n; j++)
		{
			/* Check if jth bit in the counter is set
			If set then pront jth element from set */
			int k = 1 << j;
			if (counter & (1 << j))
			{
				
				cout << set[j];
			}
		}
		printf("\n");
	}

}

int main()
{
	char set[] = { 'a','b','c'};
	printPowerSet(set, 3);

	for (int i = 0; i < 8; i++)
	{
		cout<<a[]
	}
	system("pause");
	return 0;
    
}

