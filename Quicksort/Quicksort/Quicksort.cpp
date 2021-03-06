// Quicksort.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
using namespace std;
#include<string>
#include <vector>

int partition(int *A, int start, int end)
{
	int pivot = A[end];
	int pindex = start;
	int temp = 0;

	for (int i = start; i < end; i++)
	{
		if (A[i] <= pivot)
		{
			temp = A[i];
			A[i] = A[pindex] ;
			A[pindex] = temp;
			pindex++;
		}
	}
	temp = A[pindex];
	A[pindex] = A[end];
	A[end] = temp;
	return pindex;
}

void quick_sort(int *A, int start, int end)
{
	int partIndex = 0;
	if (start<end)
	{
		partIndex = partition(A, start, end);
		quick_sort(A, start, partIndex-1);
		quick_sort(A, partIndex + 1, end);
	}

}


int main()
{
	int A[8] = { 2,1,3,6,8,5,7,4};
	quick_sort(A,0,7);

	for (int k = 0; k < 8; k++)
	{
		cout << A[k] << " ";
	}

	system("pause");
	return 0;
}


