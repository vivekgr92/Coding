// queueSTL.cpp : Defines the entry point for the console application.
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

	queue<int>myq;
	vector<int> myvector = { 1,5,7,6 };
	vector<int>::iterator it;
	for (it = myvector.begin(); it != myvector.end(); it++)
	{
		cout << "push" << *it<<endl;
		myq.push(*it);
	}

	while(!myq.empty())
	{
		cout << "popping" <<myq.front()<<endl;
		myq.pop();
		
	}

	system("pause");
    return 0;
}

