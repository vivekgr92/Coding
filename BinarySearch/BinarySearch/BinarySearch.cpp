// BinarySearch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include<string>
#include <vector>

int Binary_search(int A[], int start, int end, int data)
{
	int mid;
	mid = start + (end - start) / 2;
	if (start > end) return -1;
	if (data == A[mid]) return mid;
	else if (data < A[mid])
	{
		end = mid - 1;
		return Binary_search(A, start, end, data);
	}
	else
	{
		start = mid + 1;
		return Binary_search(A, start, end, data);
	}
}

int main()
{
	int index, number;
	int A[] = { 2, 7, 15, 18, 20, 22, 27, 30 };
	cout << " Enter the number to be searched";
	cin >> number;
	index = Binary_search(A, 0, 7, number);
	cout << " The number is found in Index" << index << endl;
	system("pause");
    return 0;
}

