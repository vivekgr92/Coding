// WordCount.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
using namespace std;
#include<string>
#include <vector>

// Rows and colums
#define Rows 3
# define Cols 14

// Searching directions
int x[] = { -1,-1,-1,0,0,1,1,1 };
int y[] = { -1,0,1,-1,1,-1,0,1 };

bool search2D(char grid[Rows][Cols], int row, int col, string word)
{
	if (grid[row][col]!= word[0])
		return false;
	int len = word.length();

	// Searching in all directions
	for (int dir = 0; dir < 8; dir++)
	{

		// Set starting position for rows and column
		int rowdirection = row + x[dir];
		int coldirection = col + y[col];
		int k;
		// Check if the remaining characters except the first character matches the with the word

		for ( k = 1; k < len; k++)
		{
			//Out of bounds condition
			if (rowdirection >= Rows || rowdirection<0 || coldirection>=Cols || coldirection < 0)
			{
				break;
			}
			else if (grid[rowdirection][coldirection] != word[k])
			{
				break;
			}
				
			rowdirection += x[dir];
			coldirection += y[dir];
		}
		if (k == len)
			return true;
	}
	return false;
	
}

void patternSearch(char grid[Rows][Cols], string word)
{
	// Consider every point as starting point and search
	// given word
	for (int row = 0; row < Rows; row++)
		for (int col = 0; col < Cols; col++)
			if (search2D(grid, row, col, word))
				cout << "pattern found at " << row << ", "
				<< col << endl;
}

int main()
{
	char grid[Rows][Cols] = { "GEEKSFORGEEKS",
		"GEEKSQUIZGEEK",
		"IDEQAPRACTICE"
	};

	patternSearch(grid, "GEEKS");
	cout << endl;
	//patternSearch(grid, "EEE");
	system("pause");
    return 0;
}

