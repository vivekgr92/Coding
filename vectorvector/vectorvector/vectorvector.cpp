// vectorvector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "stdafx.h"
#include <iostream>
#include<string>
#include <vector>
#include<queue>
using namespace std;



int main()
{
	vector<char>store{ '*'};
	vector<vector<char>> board{ {'A', 'B', 'C', 'E'},
	{'S', 'F', 'C', 'S'},
	{'A', 'D', 'E', 'E'} };
	string word = "ABBCCEED";
	int length = word.length();
	int count = 1;
	int k = 0;
	for (int i = 0; i < board.size(); i++)
	{
		for (int j = 0; j < board[i].size(); j++)
		{
	
			//cout << board[i][j];
			if (board[i][j] == word[k])
			{
				if (k < length)
				{
					k++;
				}
				
				//board.at(i).push_back('*');
				board[i][j] = '*';
				count++;

			}
			cout << board[i][j]<<endl;
		}
	}

	if (count == length)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False"<<endl;
	}
		
	system("pause");
    return 0;
}

