// BankRobbery.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include<string>
#include <vector>
#include<algorithm>



int main()
{
	vector<int>homes = { 100, 50, 20, 700, 200,1000 };
	const int n = homes.size();
	if (n == 0)return 0;
	if (n == 1)return homes[0];
	if (n == 2) return max(homes[0], homes[1]);

	vector<int> f(n, 0);
	f[0] = homes[0];
	f[1] = max(homes[0], homes[1]);
	for (int i = 2; i < n; ++i)
	{
		int x = f[i - 2] + homes[i];
		f[i] = max(x, f[i - 1]);
	}
	cout<< "Total"<<f[n - 1];

	system("pause");
    return 0;
}

