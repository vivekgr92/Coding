// InsertionSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include<string>
#include <vector>

void insertion_sort(int A[], int n)
{
	int value = 0;
	
	for (int k = 0; k < n; k++)
	{
		for (int i = 1; i < n; i++)
		{
			value = A[i - 1];
			if (A[i - 1] > A[i])
			{
				A[i - 1] = A[i];
				A[i] = value;
			}
		}
	}
	
}

int main()
{
	int A[6] = { 7,2,4,1,5,3 };
	insertion_sort(A, 6);

	for (int k = 0; k < 6; k++)
	{
		cout << A[k] << " ";
	}

	system("pause");
	return 0;
}
