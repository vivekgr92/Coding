// C++ testing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include<string>
#include <vector>



int main() {

	vector<int>asteroids = { -5,10,5 };
	vector<int> res;
	/*for (int x : asteroids) 
	{
		while (true) 
		{
			if (res.size() && (res.back() > 0) != (x > 0)) 
			{
				if (abs(x) < abs(res.back())) break;
				if (abs(x) == abs(res.back())) 
				{
					res.pop_back();
					break;
				}
				res.pop_back();
			}
			else 
			{
				res.push_back(x);
				break;
			}
		}
	}*/

	for (int x : asteroids)
	{
		if (x>0 && x + 1>0)
		{
			if (x<x + 1)
			{
				res.push_back(x + 1);
				res.push_back(x);
			}
		}
		if (x<0 && x + 1>0)
		{
			if (abs(x)<abs(x) + 1)
			{
				res.push_back(x + 1);
				res.push_back(x);
			}
		}


	}
	cout << "Hello";
	//cout << res;
	system("pause");

}


