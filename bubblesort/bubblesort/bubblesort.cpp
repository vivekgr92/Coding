// bubblesort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include<string>
#include <vector>

void bubble_sort(int A[], int n)
{
	int temp=0;

	for (int k = 0; k < n - 2; k++)             // for n-2 passes
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (A[i] > A[i + 1])
			{
				temp = A[i];
				A[i] = A[i + 1];
				A[i + 1] = temp;
			}
		}
	}
}



int main()
{
	int A[6] = { 2,4,1,7,5,3};
	bubble_sort(A, 6);

	for (int k = 0; k < 6; k++)
	{
		cout << A[k] << " ";
	}

	system("pause");
	return 0;
}

