// SelectionSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include<string>
#include <vector>


void selection_sort(int A[],int n)
{
	int minimum = 0;
	int temp = 0;
	for (int i = 0; i < n-1; i++)
	{
		minimum = i;
		for (int j = i+1; j < n; j++)
		{
			
			if(A[j]<A[minimum])
			{
				minimum = j;
			}
		}
		temp =A[i];
		A[i] = A[minimum];
		A[minimum] = temp;
	}
}

int main()
{
	int A[6] = { 1,7,4,2,3,7};
	selection_sort(A,6);

	for (int k = 0; k < 6; k++)
	{
		cout << A[k] << " ";
	}

	system("pause");
    return 0;
}

